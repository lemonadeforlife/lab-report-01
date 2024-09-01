/*
Problem Number: 03
Problem Name: Write a C program to input two numbers and perform all arithmetic operations (addition, subtraction, multiplication, and division).
*/
#include <stdio.h> // Standard Input Output Header Library Function has been declared

int main() // Main function has been declared
{ // Code Block has started from here
  int x,y; // x & y integer value has been declared
  scanf("%d%d", &x, &y); // Taking input from user for integer value x & y
  printf("Addition: %d\n", x+y); // printing Addition result by adding two values x & y
  printf("Substraction: %d\n", x-y); // printing Substraction result by subsctracting two values x & y
  printf("Multiplication: %d\n", x*y); // printing Multiplication result by multiplying two values x & y
  printf("Divison: %d\n", x/y); // printing Division result by dividing two values x & y
  return 0; // Finally returning 0 for indicating successful execution
} // Code Block has ended here
