/*
Problem Number: 14
Problem Name: Write a C program to input marks for five subjects and calculate the total marks, average.
*/
#include <stdio.h> // Standard Input Output Header Library Function has been declared
int main() // Main Function has been declared
{ // Code block has started
  float sub1, sub2, sub3, sub4, sub5; // Declared 5 float variables
  scanf("%f %f %f %f %f", &sub1,&sub2,&sub3,&sub4,&sub5); // Sequentially taking 5 float variables input from user
  printf("\nTotal Marks: %.2f", (sub1+sub2+sub3+sub4+sub5)); // Total marks has been printed after calculation
  printf("\nAverage Marks: %.2f", (sub1+sub2+sub3+sub4+sub5)/5); // Average marks has been printed as well after calculation
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here
