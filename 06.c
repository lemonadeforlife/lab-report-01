/*
Problem Number: 06
Problem Name: Write a C program to input the radius of a circle and find its diameter, circumference, and area.
*/
#include<stdio.h> // Standard Input Output Header Library Function has been declared

int main() // Main function has been declared
{ // Code block has started here
  int r; // Integer variable r has been declared
  scanf("%d", &r); // Taking input for variable r
  printf("Diameter: %d\n", 2*r); // printing the calculation of diameter
  printf("Circumferance: %.2f\n", 2*3.14*r); // printing the calculation of circumference
  printf("Area: %.2f\n", 3.14*r*r); // printing the calculation of area
  return 0; // returning 0 for indicating successful execution
}
