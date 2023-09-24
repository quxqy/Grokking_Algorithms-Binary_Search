# Binary Search

This is a simple program that implements a binary search algorithm to find a given number in a list from the book Grokking Algorithms by Aditya Bhargava
## Usage

1. Compile the code using a C++ compiler.
2. Run the executable file.
3. Enter a number to search for in the list.

## Description

The program first declares an array called my_list with some numbers. It then prompts the user to enter a number to search for. The binary_search function is called to perform the search and return the index of the number if found, or "None" if not found.

The binary_search function takes an array and a number as parameters. It initializes variables for the low and high indices, as well as a variable to store the mid index and the guessed number. The function uses a while loop to iteratively search for the number by dividing the search range in half at each step. If the guessed number is equal to the desired number, the function returns the mid index. If the guessed number is greater than the desired number, the high index is adjusted accordingly. If the guessed number is smaller than the desired number, the low index is adjusted accordingly.

## Limitations

- The program only works for sorted arrays.
- The program assumes that the user will enter a valid number to search for. No input validation is implemented.
