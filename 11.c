/*
Problem Number: 11
Problem Name: Write a C program to input a number and calculate its square root.
*/
#include <stdio.h> // Standard Input Output Header Library Function has been declared
#include <math.h>  // Mathmetical Header Library Function has been declared
int main() // Main Function has been declared
{ // Code block has started
   int number; // integer variable has been declared
   scanf("%d", &number); // Taking input from user for integer variable
   printf("%.2lf",(double) sqrt(number)); // Converted integer to double & using sqrt function for square rooting the number variable & printed the output
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here
