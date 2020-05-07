Ye Ri Park 3035712080

Taeyeon Lee 3035718096


# Escape UFO: Game Description and Rules
![](https://github.com/yeri918/escape_ufo/blob/master/Banner.png)
Escape UFO requires players to pass three rounds of different games incorporated in the mission of escaping UFO back to the Earth. 

**Round 1.**

Goal: Decrypt the encrypted message to find the right card to open the door. 
The player wakes up in an unknown place, and the player finds a decrypted message under his/her pillow. The time starts ticking, which marks the start of the first game. The player is required to find the enigma machine to decrypt the message. The encrypted message instructs the player to find the card to be scanned on the card scanner next to the door with clues.

**Round 2.** 

Goal: Get the white blocks away from the path to the exit. 
When the card is scanned successfully, the player enters the next stage. The player is required to open up the path to the next exit door by using the arrow keys. There are two types of blocks: black blocks that do not move and white blocks that are controlled altogether. The player has to make sure no blocks are on his/her way to the next door. 

**Round 3.**  

Goal: Get to the first floor through round tubes. 
When the player successfully enters the second door, the player can see himself/herself on the fourth floor. There is an alien guard on each floor and a path to the next floor. The player has to get to the fourth floor without getting physically caught by aliens. 

The time stops ticking when all three stages have been completed, and the player’s time taken will be shown with other players’ times.

# Coding Elements 

## 1. Generation of random game sets or events
Since the scores in Escape UFO are based on the times taken, generating random game sets and events is crucial to avoid one player attempting multiple trials to obtain the highest score. 

In the first round, there are five cards where four of them are fake and only one of them can be scanned to open the door. The right card will be randomized among five cards, so every time a player plays the game, the right card will be placed at different locations. Depending on where the right card is placed, the clues written will also be different. 

In the second round, the board for the player will be randomized from several boards that have been already made. The problem with randomizing the placements of blocks is that there could be no answer to the path to the exit door, so to avoid this problem, we have decided to make some boards beforehand and to be randomized from them for every player. 

In the third round, the placements of the aliens and the round tubes and the number of aliens will be randomized on every floor. This prevents experienced players from remembering the exact paths down to the first floor. 

## 2. Data structures for storing game status
Players may not complete the whole game, so in this case, in Escape UFO, we allow players to choose between “start a new game” and “continue”. To allow the players to continue the game, we need to store the game status for every player. Every game status will be saved as an integer to record where the player has stopped the game at. 

The `switch` statement will be used to load the game from where the player has ended previously. The counter will be used to indicate which status the player has gone. Based on the integer of the counter, the game will resume using the switch statement. 

## 3. Dynamic Memory Management

**Dynamic arrays** will be used in this program to avoid any non-essential counts and calculations.

A dynamic struct array scoreboard is needed to display/sort the final scores of the user. Initially, the array will be assigned very largely (about a thousand or even more), but it will be altered to the number of lines of text file scoreboard.txt (which would be explained later). 

Dynamic struct array inventory will also be created to save all the objects that the user keeps during the gameplay. Since it is unknown how many items the user will keep, the array is initially sized zero, and later expanded depending on the number of items. The struct will include two string values: an item name and an item description.

## 4. File Input/Output

Two files needed: **autosave.txt**, **scoreboard.txt**

**autosave.txt**

This blank text file is created as soon as the game operates for the first time in a new working space. When a player starts a new game, a line is inputted into the file:

`ID` `UserName` `Checkpoint` `Current Stage`
1. `ID` is a randomly assigned value for each individual user. At the start of the game, a user is required to input a unique 5 digit code. This is used to identify each user in a text file.
2. `UserName` is the name of the protagonist that a user assigns when a game starts. Different users can have the same UserName.
3. `Checkpoint` is a variable that is initially created at the start of the game. Each stage of the game has its own unique ‘checkpoint variable’. This variable indicates which stage player is in and can continue at the same stage when the game is rebooted before the game is finished. The user can resume the game from where it ended before closing the game.
4. `Current Stage` is the in-game name of the stage. Since the user doesn’t know what checkpoint value represents which stage, they wouldn’t understand what stage they were in only with the checkpoint. The name of the stage will notify the user easily.

The game will have an option to resume it. If the user wants to resume the game, the user can input the ID and continue the game. In case the user cannot remember the ID, there is an option to see all of the content in autosave.txt and input the ID shown (file output).

**scoreboard.txt**
The file is created after the game is completed, and gets removed. When the user ends the game, a line is inputted in a file:

`UserName` `Score` 

1. `UserName` is the name of the protagonist that a user assigns when a game starts. Different users can have the same UserName.
2. `Score` is a point based on the time taken for the user to end the game (details of the score will be written later). The user can display all previous records sorted in order from highest score to lowest score.


## 5. Program codes in multiple files

File for save(Game0.h)
 - `start.cpp`: welcomes the player and asks whether they want to start a new game, resume the game, or to quit. 

First Round (Game1.h)
 - `locate.cpp`: locates the true key and fake keys in different containers.
 - `clue.cpp`: gives clues to find the key (Specific content of the notes will be updated later. This part might consist several functions).
 - `encryption.cpp`: this function encrypts the note to another form (alien words) before the message is found.
 
Second Round (Game2.h)
 - `boardscript.cpp`: randomly loads one of the pre-made boards (total 5 or more)
 - `display.cpp`: outputs the current board
 - `changeboard.cpp`: changes the status of the board depending on user input
 - `refresh.cpp`: refresh the board in case the user failed the puzzle
 - `shoot.cpp`: shoot a bullet to the front if the user requested. The bullet breaks the block.
 
Third Round (Game3.h)
 - `tubeassign.cpp`: randomly assign the location of the tubes
 - `display.cpp`: outputs the current board (it can possibly be the same function as second round’s display.cpp)
 - `humanmove.cpp`: the person will move to a certain direction depending on the user’s input.
 - `alienmove.cpp`: the alien will move from side to side unless the human is too close; it will follow the human then.
 
Main function (main.cpp)
 - `string autosave()`: updates the checkpoint variable at autosave.txt.
 - `void ranking()`: updates the achievement % when a user interacts with a certain item or progresses the game.
 - `int main()`: runs the whole game
 
Each function will take one `.cpp` file. There will be 5 or 6 `.h` files that hold the function files. A `makefile` will be created to simply compile the files after the alteration.
