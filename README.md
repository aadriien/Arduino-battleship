To play the game, the user can take one of two approaches: via the serial monitor or via the interactive inputs. Please note that the former requires access to a computer keyboard, while the latter only necessitates the board itself.


——————————

Version 1: serial monitor
1. Plug arduino board into computer’s USB port
2. Compile & upload the code
3. When asked, type ‘s’ to play via the serial monitor
4. Written text on the serial monitor will prompt you for a guess between 1-8. Type your guess to choose the cell to target
5. If your guess hits a cell of the ship, then the corresponding red LED light will flash and turn on, and a short version of the celebratory Star Wars Cantina song will play. The serial monitor will also reflect your hit
6. If your guess misses, then the intimidating Star Wars Imperial March song will play. The serial monitor will also reflect your miss
7. Once you have sunk a ship (with 3 correct guesses), the full version of the celebratory Star Wars Cantina song will play, and all 8 red LED lights will flash back & forth (Knight Rider style) to signal your win. The serial monitor will also reflect your kill
8. Because the game has ended, the Star Wars theme song will play, and the blue LED light will flash. Written text on the serial monitor will prompt you to play again. If you write ‘y’, then the game will recommence anew; if you write ‘n’, then the program will terminate
 

——————————
 
Version 2: interactive inputs
1. Plug arduino board into computer’s USB port
2. Compile & upload the code
3. When asked, type ‘i’ to play via interactive inputs
4. To select a cell to target, you will need to make a guess between 1-8. To do this, turn the potentiometer in a direction corresponding to your guess. Rotating the potentiometer counterclockwise results in a lower guess (i.e. a value closer to 1), while rotating clockwise results in a higher guess (i.e. a value closer to 8)
5. If your guess hits a cell of the ship, then the corresponding red LED light will flash and turn on, and a short version of the celebratory Star Wars Cantina song will play. The serial monitor will also reflect your hit
6. If your guess misses, then the intimidating Star Wars Imperial March song will play. The serial monitor will also reflect your miss
7. Once you have sunk a ship (with 3 correct guesses), the full version of the celebratory Star Wars Cantina song will play, and all 8 red LED lights will flash back & forth (Knight Rider style) to signal your win. The serial monitor will also reflect your kill
8. Because the game has ended, the Star Wars theme song will play, and the blue LED light will flash. You are then given a short period of time to decide whether you would like to play another round of the game. If you would like to play again, then press the button on the breadboard, and a new game of battleship will commence. If you are finished, then no further action is needed, and the game will terminate on its own



————————————————————

*** Credit for all songs utilized in code (thank you, Rob!): [robsoncouto](https://github.com/robsoncouto/arduino-songs)
