/*
Problem Number: 13
Problem Name: Write a C program to input the base and height of a triangle and find its area.
*/
#include <stdio.h> // Standard Input Output Header Library Function has been declared
int main() // Main Function has been declared
{ // Code block has started
  float base, height; // Two float variables has been declared
  scanf("%f%f", &base,&height); // Sequentially taking input for base & height variable from user
  printf("\nArea of a triangle is %.2f", (base*height)/2); // printing the area of a triangle after calculating it's variables
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here
