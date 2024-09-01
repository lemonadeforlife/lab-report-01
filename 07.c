/*
Problem Number: 07
Problem Name: Write a C program to input a length in centimeters and convert it into meters and kilometers.
*/
#include<stdio.h> // Standard Input Output Header Library Function has been declared

int main() // Main function has been declared
{ // Code block has started from here
  int length; // Integer variable length has been declared 
  scanf("%d", &length); // Taking input from user for length variable
  printf("Meters: %d\n", length/100); // printing the calculation of meters result
  printf("Kilometers: %d\n", length/1000); // printing the calculation of kilometers result
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here 
