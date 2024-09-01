/*
Problem Number: 04
Problem Name: Write a C program to input the length and width of a rectangle and find its perimeter.
*/
#include <stdio.h> // Standard Input Output Header Library Function has been declared

int main() // Main Function has been Declared
{ // Code Black has started here
  float length, width; // two float variables length & width has been declared
  scanf("%f %f", &length, &width); // Taking input of two variables length & width variable from user
  printf("Perimeter is %.2f meter", (length+width)*2); // Finally calculating the two variables by using perimeter equation & printing it
 return 0; // Finally returning 0 for indicating successful execution
} 
