In structuring my project, I opted for a Star Wars theme. This decision was made in part because I enjoy the Star Wars franchise, but also because I felt that it would make for a pleasant complement to the traditional game of Battleship. In this sense, my project acts as a kind of intergalactic game of Battleship—rather than finding ourselves in the traditional naval/oceanic setting, we are instead localized in outer space. Granted, the ships will still be fighting, and still making attempts to destroy one another, but this time with the invigorating backdrop of the Star Wars universe! While assembling this project, I placed emphasis on visual and auditory feedback as a means of engaging the user. LED lights and piezo sound, therefore, took a central role.

——————————

To speak first to the circumstances of visual feedback, the 8 red LED lights that were provided in the skeletal outline of the game (on QMplus) seemed adequate for representing the 8 possible cells for the battleship, thus I opted to retain that number. I decided to augment their functionality by not only turning them on when hit, but also by flashing them repeatedly for a brief period so as to draw the user’s attention to their changed state.

——————————

When 3 successful hits had been made and the user had sunk the ship, I opted to signal that victory by adopting the Knight Rider pattern of lighting the LEDs in succession, so that they flowed back and forth seamlessly for a short stretch of time. This choice was inspired by a desire to imitate a game show / casino environment, where a series of moving lights signified a job well done.

——————————

Following this kill, I employed the use of a blue LED light, which would flash repeatedly at the official end of each game, to indicate to the user that the current round was up, and that they would therefore need to make a decision as to whether they would like to play the game again. Here I felt that the blue LED light paired nicely with the red LED lights, as together they embodied the classic image of Star Wars (think lightsabers!).

——————————

Moving on to the circumstances of sound, I cited the work of [robsoncouto on GitHub](https://github.com/robsoncouto/arduino-songs) to construct the Star Wars ambience that I was seeking. I did indeed decide to condense/prune some of these songs so that their length and choice of notes would better suit my preferences, and I also manipulated their accompanying functions to make my code more modular (so that all 4 songs could be played by the same single function, rather than having a separate music-playing function for each one), but ultimately all credit for musical orchestration goes to robsoncouto. Specifically, I made use of the Cantina song (broken down into a shorter and a longer version), the Imperial March, and the Star Wars theme song.

——————————

A short version of the Cantina song accompanied each hit for the purposes of celebration, while the longer version of that same Cantina song accompanied a kill so as to bring upon the celebration in full. I chose to utilize both a shorter and longer version of the same song for hits and kills respectively so that I could build the anticipation—in this way, when the user finally sinks a ship they are rewarded not just with the shorter Cantina songs, but with the full Cantina song (to which the shorter rounds have been leading up).

——————————

I then utilized the Imperial March as an intimidation tactic to accompany each guess that resulted in a miss, so that the user could feel the pressure of their mistake. The tempo of this song is also faster than it would typically be played, again with the intention to exacerbate those feelings of stress and intensity so as to hopefully elicit a better performance.

——————————

Finally, the Star Wars theme song was added to the very end of the game, after a kill had been made and the LED lights had raced back and forth in their Knight Rider style. I found it to be a nice means of bringing the game to a close, reinstating that nostalgic galactic ambience, and bringing the user’s attention to the next steps, where the flashing blue LED light following the theme song would then signify the need for the user to either continue with a new game or terminate things entirely.

——————————

Drawing focus now towards the choices around interactive inputs (i.e. the removal of the serial monitor), I found the potentiometer to be a particularly suitable means of selecting cells to target, as the simple clockwise/counterclockwise twists allowed for a very intuitive and user-friendly experience. It was also satisfying to see the ease with which I could map the potentiometer’s adjusted value to those of the cell constrictions (i.e. mapping a value between 0-1023 to a value between 1-8). The code itself was very straightforward in its approach, and the component of mapping in particular meant that the user physically could not input a value outside of the 1-8 bounds, which eliminated the need for error-checking entirely.

——————————

The choice of the button to restart the game also felt like a good fit from a UI/UX standpoint, as it is simple enough for the user to press the button if they wish to play again, or otherwise to leave the button untouched so that the game can terminate on its own. Here I decided to employ the use of a timed countdown, as I figured it would be prudent to give the user enough time to reach for and press the button, but not so much time that they would be confused as to the game’s official end.

——————————

As a final note, although the latter half of the project (interactive inputs) called for the removal of the serial monitor, I nevertheless decided to keep it running alongside the program [giving feedback] purely for the purposes of keeping the user up-to-date with the occurrences of the game. Each hit/miss/kill, for example, is noted on the serial monitor, as are brief notifications that provide basic instructions to play. Such instructions include reminding the user to twist the potentiometer, or otherwise to press the button if, at the end of the current round, they wish to play the game anew.

——————————

I also equipped the user with the option to play the game via the serial monitor or via interactive inputs at the start of each round, so that they could make that simple and seamless decision themselves without having to worry about hooking up new wires, commenting out sections of code, etc. And not only does this feature appear at the start of the first game (i.e. upon initial compilation and upload to the Arduino board), but users who choose to keep playing are also given the option to select either of the two versions of the game with each new round that they play, which gives them a great deal of flexibility in transitioning from one mode of play to the other, and therefore makes for a more satisfactory experience.


