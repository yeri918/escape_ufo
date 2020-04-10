Ye Ri Park 3035712080


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
When the player successfully enters the second door, the player can see himself/herself on the fifth floor. There are one to three alien guards on each floor and a round tube on each floor connected to the next bottom floor. The player has to get to the first floor without getting physically caught by aliens. 

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
