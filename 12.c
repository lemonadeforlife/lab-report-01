/*
Problem Number: 12
Problem Name: Write a C program to input two angles of a triangle and find the third angle.
*/
#include <stdio.h> // Standard Input Output Header Library Function has been declared
int main() // Main Function has been declared
{ // Code block has started
  float angle1, angle2; // Two float vairables has been declared
  scanf("%f%f",&angle1,&angle2); // Taking input for that two float variables from user 
  printf("Third angle is %.2f", 180-(angle1+angle2)); // Third angle has been printed after the calculation
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here
