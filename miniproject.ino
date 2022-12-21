////////////////////
// CREDIT FOR STARWARS SONGS GOES TO robsoncouto ON GITHUB (https://github.com/robsoncouto/arduino-songs/blob/master/cantinaband/cantinaband.ino)
////////////////////
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0


// change this to make the song slower or faster
int tempo = 100;
int notes = 0;
String song;


int melodyCantina[] = {
  // Cantina Band - Star wars 
  // Score available at https://musescore.com/user/6795541/scores/1606876
  NOTE_B4,-4, NOTE_E5,-4, NOTE_B4,-4, NOTE_E5,-4, 
  NOTE_B4,8,  NOTE_E5,-4, NOTE_B4,8, REST,8,  NOTE_AS4,8, NOTE_B4,8, 
  NOTE_B4,8,  NOTE_AS4,8, NOTE_B4,8, NOTE_A4,8, REST,8, NOTE_GS4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_G4,4,  NOTE_E4,-2, 
  NOTE_B4,-4, NOTE_E5,-4, NOTE_B4,-4, NOTE_E5,-4, 
  NOTE_B4,8,  NOTE_E5,-4, NOTE_B4,8, REST,8,  NOTE_AS4,8, NOTE_B4,8,

  NOTE_A4,-4, NOTE_A4,-4, NOTE_GS4,8, NOTE_A4,-4,
  NOTE_D5,8,  NOTE_C5,-4, NOTE_B4,-4, NOTE_A4,-4,
  NOTE_B4,-4, NOTE_E5,-4, NOTE_B4,-4, NOTE_E5,-4, 
  NOTE_B4,8,  NOTE_E5,-4, NOTE_B4,8, REST,8,  NOTE_AS4,8, NOTE_B4,8,
  NOTE_D5,4, NOTE_D5,-4, NOTE_B4,8, NOTE_A4,-4,
  NOTE_G4,-4, NOTE_E4,-2,
  NOTE_E4, 2, NOTE_G4,2,
  NOTE_B4, 2, NOTE_D5,2,

  NOTE_F5, -4, NOTE_E5,-4, NOTE_AS4,8, NOTE_AS4,8, NOTE_B4,4, NOTE_G4,4, 
};


int melodyCantinaShort[] = {
  // Cantina Band - Star wars 
  // Score available at https://musescore.com/user/6795541/scores/1606876
  NOTE_B4,-4, NOTE_E5,-4, NOTE_B4,-4, NOTE_E5,-4, 
  NOTE_B4,8,  NOTE_E5,-4, NOTE_B4,8, REST,8,  NOTE_AS4,8, NOTE_B4,8, 
  NOTE_B4,8,  NOTE_AS4,8, NOTE_B4,8, NOTE_A4,8, REST,8, NOTE_GS4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_G4,4,  NOTE_E4,-2, 
};


int melodyImperial[] = { 
  // Darth Vader theme (Imperial March) - Star wars 
  // Score available at https://musescore.com/user/202909/scores/1141521
  // The tenor saxophone part was used
  
  NOTE_A4,4, NOTE_A4,4, NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16,

  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,//4
  NOTE_E5,4, NOTE_E5,4, NOTE_E5,4, NOTE_F5,-8, NOTE_C5,16,
  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,
};


int melodyTheme[] = { 
  // Star Wars theme - Star wars 
  // Score available at https://musescore.com/user/202909/scores/1141521
  // The tenor saxophone part was used
  
  NOTE_AS4,8, NOTE_AS4,8, NOTE_AS4,8,//1
  NOTE_F5,2, NOTE_C6,2,
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,  
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,  
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,8, NOTE_C5,8, NOTE_C5,8,
  NOTE_F5,2, NOTE_C6,2,
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,  
  
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4, //8  
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,-8, NOTE_C5,16, 
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C5,-8, NOTE_C5,16,
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  
  NOTE_C6,-8, NOTE_G5,16, NOTE_G5,2, REST,8, NOTE_C5,8,//13
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C6,-8, NOTE_C6,16,
  NOTE_F6,4, NOTE_DS6,8, NOTE_CS6,4, NOTE_C6,8, NOTE_AS5,4, NOTE_GS5,8, NOTE_G5,4, NOTE_F5,8,
  NOTE_C6,1 
};



// this calculates the duration of a whole note in ms
int wholenote = (60000 * 2) / tempo;

int divider = 0, noteDuration = 0;

// get sizes of arrays for each song
int sizeImperial = sizeof(melodyImperial);
int sizeCantina = sizeof(melodyCantina);
int sizeCantinaShort = sizeof(melodyCantinaShort);
int sizeTheme = sizeof(melodyTheme);

////////////////////
/////////////
////////////////////


// set up components of the game & connect to hardware
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int MAX_BOARD_SIZE = 8;
const int SHIP_SIZE = 3;

int locationCells[SHIP_SIZE];
bool alreadyGuessed[SHIP_SIZE] = {false, false, false};

int numberOfHits = 0;

int piezo = 10;
int blueLED = 11;

int potentiometer = 0;
int potentiometerValue = 0;

int button = 13;
int buttonValue = LOW;

// specify serial monitor vs interactive inputs
char playMode;


// Purpose: runs through once to structure & begin the program
void setup() {
  // set all LED pins to output & turn them off
  for (int i = 0; i < MAX_BOARD_SIZE; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  pinMode(blueLED, OUTPUT);
  digitalWrite(blueLED, LOW);
  
  // set piezo to output & button to input
  pinMode(piezo, OUTPUT);
  pinMode(button, INPUT);

  Serial.begin(9600);

  // set random location of battleship
  setLocationCells();

  choosePlaymode();
}


// Purpose: runs through repeatedly to process the program
void loop() {  
  char cGuess; // char type guess
  int iGuess; // int type guess
  String result;

  // playing via serial monitor, obtain & process guess
  if (playMode == 's') {
    // char type guess must be converted to int 
    cGuess = getGuessS();
    iGuess = (cGuess - '0');
    
    result = checkYourself(iGuess);
    Serial.println(result);   
  }
  // playing via interactive inputs, obtain & process guess
  else { 
    delay(3000); // give user time to adjust potentiometer
    
    iGuess = getGuessI();
    result = checkYourself(iGuess);
    Serial.println(result);

    if (result == "already hit") {
      // wait on an already hit so as to avoid spamming serial monitor (otherwise it keeps reading potentiometer as same input)
        if (playMode == 'i') {
          delay(5000);
        }
    }
  } 
  
  Serial.println();
  delay(500);
  
  processResult(result);
}


// Purpose: prompt user to choose whether to play via serial monitor or via interactive inputs
// Notes: assumes user can access serial monitor to decide
void choosePlaymode() {
  Serial.println(F("********************"));
  Serial.println(F("Welcome! To play battleship using the serial monitor, type 's'. For a more interactive experience, type 'i'."));
  Serial.println();

  // get user's decision
  while (Serial.available() == 0) { }   
  playMode = Serial.read();

  while (playMode != 115 && playMode != 105) { // 's' == 115, 'i' == 105 in ASCII
    Serial.print(F("You have entered: "));
    Serial.println(playMode);
    
    Serial.println(F("Invalid input"));
    Serial.println();
    
    Serial.println(F("To play battleship using the serial monitor, type 's'. For a more interactive experience, type 'i'."));
    Serial.println();
    while (Serial.available() == 0) { }
    playMode = Serial.read();
  }

  // report back their decision
  if (playMode == 's') {
    Serial.println(F("You have entered: s. Let's use the serial monitor!"));
  }
  else {
    Serial.println(F("You have entered: i. Let's make it interactive! Adjust the potentiometer to make your guess."));
  }
  Serial.println();
}


// Purpose: utilize user's guess to create engaging response on breadboard
// Notes: music is the focus here, as LED lights are handled elsewhere
void processResult(String result) {
  // delegate musical response according to guess
  if (result == "miss") {
    song = "imperial";
    playSong(melodyImperial);
  }
  else if (result == "hit") {
    song = "cantinaShort";
    wholenote = (60000 * 2) / 150;
    playSong(melodyCantinaShort);
  }
  else if (result == "kill") {
    song = "cantina";
    wholenote = (60000 * 2) / 150;
    playSong(melodyCantina);
    victory();

    delay(1000);  

    // handle ending of game
    song = "theme";
    wholenote = (60000 * 2) / 110;
    playSong(melodyTheme);

    // flash blue LED light to signal it's time for user to decide whether to start a new game
    flashBlue();
  
    if (playMode == 's') {
      endProcedureS(); 
    }
    else {
      endProcedureI();
    }     
  }  
}


// Purpose: end serial monitor version of game, prompt user for new game
// Notes: there is no limit to the time the user has to decide upon restarting
void endProcedureS() {
  char repeatYN;

  Serial.println();
  Serial.println(F("Want to play again? (y/n)"));
  delay(100);
   
  // get user's decision
  while (Serial.available() == 0) { }   
  repeatYN = Serial.read();
 
  while (repeatYN != 121 && repeatYN != 110) { // 'y' == 121, 'n' == 110 in ASCII
    Serial.print(F("You have entered: "));
    Serial.println(repeatYN);
    
    Serial.println(F("Invalid input"));
    Serial.println();
    
    Serial.println(F("Want to play again? (y/n)"));
    while (Serial.available() == 0) { }
    repeatYN = Serial.read();
  }

  // report back their decision & respond accordingly
  if (repeatYN == 121) {
    Serial.println(F("You have entered: y"));
    Serial.println(F("All right, let's play again!"));
    Serial.println();
    
    // reset game settings before starting anew
    resetGame();
  }
  else if (repeatYN == 110) {
    Serial.println(F("You have entered: n"));
    Serial.println(F("Thanks for playing!"));
    Serial.println();
    delay(1000);
    exit(1);
  }  
}


// Purpose: end interactive inputs version of game, prompt user for new game
// Notes: the user's decision to restart is timed 
void endProcedureI() { 
  // structure countdown time for user to decide whether to restart game
  int restartCountdown = 5000;
  Serial.println();
  Serial.println(F("Press the button to play again."));
  delay(3000);
  
  while (restartCountdown > 0) {
    Serial.print(" ");   

    // check if button has been pressed
    buttonValue = digitalRead(button);
    if (buttonValue == HIGH) { 
      delay(1000);
      Serial.println();
      Serial.println();
      Serial.println(F("All right, let's play again!"));
      Serial.println();

      // reset game settings before starting anew
      resetGame();
      return;
    }
    restartCountdown--;
  }
  // user has chosen to terminate game (countdown timer has expired)
  Serial.println();
  Serial.println();
  Serial.println(F("Thanks for playing!"));
  Serial.println();
  delay(1000);
  exit(1);
}


// Purpose: flash blue light at the end of game
// Notes: this serves as a preface to the user deciding whether to continue with new game or terminate
void flashBlue() {
  int repeat = SHIP_SIZE *2;
  while (repeat > 0) {
    digitalWrite(blueLED, HIGH);
    delay(400);
    digitalWrite(blueLED, LOW);
    delay(400);
    repeat--;
  }
}


// Purpose: reset all elements of game so as to create a blank slate to begin
// Notes: all previous settings will be erased, as if the program were being compiled afresh
void resetGame() {
  // turn all LED lights off
  for (int i = 0; i < MAX_BOARD_SIZE; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  digitalWrite(blueLED, LOW);
  
  // set random location of battleship
  setLocationCells();

  for (int i = 0; i < SHIP_SIZE; i++) {
    alreadyGuessed[i] = false;
  }

  numberOfHits = 0;
  buttonValue = LOW;

  choosePlaymode();
}


// Purpose: randomly select 3 cells to represent the battleship
// Notes: Arduino's random function is a bit wonky & will often make the same "random" selection in multiple games
void setLocationCells() {
  // start location cannot surpass position 5 (6th cell) since we need 2 open cells to follow it
  int startLocation = random(0, MAX_BOARD_SIZE - SHIP_SIZE + 1);

  for (int i = 0; i < SHIP_SIZE; i++) {
    locationCells[i] = startLocation + i;
  }
}


// Purpose: obtain the user's guess & return it in serial monitor version of game
// Notes: necessary to confirm validity of guess (between 1-8) since serial monitor allows for more freedom in typing
char getGuessS() {
  char readInput = '^';
  while ((readInput < '1') || (readInput > '8')) {
    Serial.println(F("Enter a guess (1-8):"));
    while (Serial.available() == 0) { }

    // report the guess back to the user
    readInput = Serial.read();
    Serial.print("You have entered: ");
    Serial.println(readInput);

    if ((readInput < '1') || (readInput > '8')) {
      Serial.println(F("Invalid input"));
      Serial.println();
    }
  }
  return readInput; 
}


// Purpose: obtain user's guess & return it in interactive inputs version of game
// Notes: there's no need to confirm validity of guess (between 1-8) since potentiometer ensures correct values in how it reads input 
char getGuessI() {
  potentiometerValue = analogRead(potentiometer);
  
  // convert potentiometer's position to a guessed value between 1-8
  int potentiometerGuess = map(potentiometerValue, 0, 1023, 1, 8);
  
  Serial.print(F("You have guessed: "));
  Serial.println(potentiometerGuess);

  return potentiometerGuess;
}


// Purpose: check whether the user's guess resulted in hit, miss, kill
// Notes: if the cell has already been hit/guessed, then no further action is taken
String checkYourself(int guess) {
  // set default result to a miss
  String result = "miss";

  for (int i = 0; i < SHIP_SIZE; i++) {    
    // the guess hit a cell
    if (guess == locationCells[i]) {   
      // check if cell has already been guessed
      if (not alreadyGuessed[i]) {
        numberOfHits++;
        alreadyGuessed[i] = true;

        // flash corresponding red LED light on hit
        for (int j = 0; j < SHIP_SIZE * 2; j++) {
          digitalWrite(ledPins[guess - 1], HIGH);
          delay(200);
          digitalWrite(ledPins[guess - 1], LOW);
          delay(200);
        }
        // then leave the hit light on
        digitalWrite(ledPins[guess - 1], HIGH);

        if (numberOfHits == SHIP_SIZE) {
          result = "kill";
        }
        else {
          result = "hit";
        }       
      }
      // the hit/guess has already been made
      else {
        result = "already hit";
      }           
    }  
  }
  // the guess is a miss, the default option
  return result; 
}


// Purpose: construct engaging response when the guess results in a kill
// Notes: only the LED lights are manipulated here, as music is handled elsewhere
void victory() {
  // turn all lights off
  for (int i = 0; i < MAX_BOARD_SIZE; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  // then have lights rush back & forth repeatedly (Knight Rider)
  for (int i = 0; i < SHIP_SIZE; i++) {
    for (int i = 0; i < MAX_BOARD_SIZE; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
    }
    for (int i = MAX_BOARD_SIZE; i > 0; i--) {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
    }
  }    
}


// Purpose: select the appropriate song to play, then play it
// Notes: all credit for latter half of function (the process of playing the music) belongs to robsoncouto on GitHub
void playSong(int songChoice[]) {
  // identify the song to play
  if (song == "cantina") {
    notes = sizeCantina / sizeof(melodyCantina[0]) / 2;
  }
  else if (song == "cantinaShort") {
    notes = sizeCantinaShort / sizeof(melodyCantinaShort[0]) / 2;
  }
  else if (song == "theme") {
    notes = sizeTheme / sizeof(melodyTheme[0]) / 2;
  }
  else {
    notes = sizeImperial / sizeof(melodyImperial[0]) / 2;
  }

  
  ////////////////////
  // ALL CREDIT FOR BELOW FUNCTIONALITY GOES TO robsoncouto ON GITHUB (https://github.com/robsoncouto/arduino-songs/blob/master/cantinaband/cantinaband.ino)
  ////////////////////
  
  // iterate over the notes of the melody
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = songChoice[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } 
    else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(piezo, songChoice[thisNote], noteDuration*0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    
    // stop the waveform generation before the next note.
    noTone(piezo);
  } 
}
