# Word Search Puzzle Solver

#### Author: Puneet Kaur
#### Date: March 7, 2022
#### Time: 6:00 PM

This is a C program designed to find the location of a given word in a word search puzzle. It uses a grid of characters and searches for the specified word in eight possible directions: north, north-east, east, south-east, south, south-west, west, and north-west.

### Usage

To use this program, follow these steps:

1. Compile the program:
   gcc wordsearch.c -o wordsearch
    
2. Run the program:

3. The program will display the word search puzzle and the target word you want to find.

4. It will then search for the target word in all eight directions, and if found, it will display the location.

### Program Description

- The program defines a 2D character array `grid` that represents the word search puzzle.
- It defines a target `word` to search for and its size `wordSize`.
- The `search2D` function iterates through the grid and calls the `search1D` function to search for the word in each direction.
- The `search1D` function checks if the word can be found starting from the current position in the specified direction.
- If the word is found, it displays the location and direction of the word.
- The `directions` function returns the row and column offsets for each of the eight possible directions based on the direction number provided.




