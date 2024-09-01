/*
Problem Number: 10
Problem Name: Write a C program to find the power of any number (x^y).
*/
#include <stdio.h> // Standard Input Output Header Library Function has been declared
#include <math.h>  // Mathmetical Header Library Function has been declared
int main() // Main Function has been declared
{ // Code block has started
	double x, y; // double variables x & y has been declared
  scanf("%lf %lf", &x, &y); // taking input from user for double variables
	printf("%.02f", pow(x, y)); // pow function has been used for using power from math.h library function. Finally limited decimal points to 2 digits and printed the output 
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here
