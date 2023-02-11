# Calculator-

![Calculator Banner](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.dreamstime.com%2Fphotos-images%2Fcalculator-banner.html&psig=AOvVaw1VMNTGY_4sNzgFWWorLPFb&ust=1676208654131000&source=images&cd=vfe&ved=0CBAQjRxqFwoTCPid7_zJjf0CFQAAAAAdAAAAABAE)

A simple command line calculator program written in C.

## Usage
The program takes in three arguments: an operator, operand1, and operand2. The operator can be either `+`, `-`, `*`, or `/`. num1 and num2 are the two numbers you want to perform the calculation on.

To run the program, compile it with a C compiler and then run the executable file with the three arguments.

Here's an example of how to run the program:

./calculator 5 + 6


The above example will perform the calculation `5 + 6` and print the result `11` on the command line.

## Error Handling
The program checks if the correct number of arguments have been provided. If less than three arguments are provided, the program will print an error message and exit with a return code of `1`.

The program also checks for division by zero and prints an error message if the operator is `/` and the second operand is `0`.

## Example
Here's an example of a session using the program:

./calculator 5 + 6
11
./calculator 10 / 0
Error: Cannot divide by zero
./calculator  6 * 5
30
./calculator 5 - 6
-1
