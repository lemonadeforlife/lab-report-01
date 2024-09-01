/*
Problem Number: 08
Problem Name: Write a C program to input a temperature in Celsius and convert it to Fahrenheit.
*/
#include<stdio.h> // Standard Input Output Header Library Function has been declared

int main() // Main function has been declared
{ // Code block has started from here
  int celsius; // Integer variable celsius has been declared 
  scanf("%d", &celsius); // Taking input from user for celsius variable
  printf("Fahrenheit: %d", (celsius*9/5)+32); // printing the calculation of Fahrenheit result
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here
