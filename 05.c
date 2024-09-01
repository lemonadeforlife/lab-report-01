/*
Problem Number: 05
Problem Name: Write a C program to input the length and width of a rectangle and find its area.
*/
#include<stdio.h> // Standard Input Output Header Library Function has been declared

int main() // Main function has declared
{ // Code block has started from here
  int length, width; // Two integer variables length & width has been declared
  scanf("%d %d", &length, &width); // Taking input from user for variables length & width
  printf("Area: %d", length*width); // printing the calculation of area
  return 0; // returning 0 for indicating successful execution
}
