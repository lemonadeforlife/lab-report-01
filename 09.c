/*
Problem Number: 09
Problem Name: Write a C program to convert a given number of days into years, weeks, and days.
*/
#include<stdio.h> // Standard Input Output Header Library Function has been declared

int main() // Main function has been declared
{ // Code block has started from here
  int day; // Integer variable day has been declared
  scanf("%d", &day); // Taking input from user for day variable
  printf("%d years, %d weeks & %d days", day/365, day/7, day%365); // printing the converted day variable into years, weeks & days
  return 0; // returning 0 for indicating successful execution
} // Code block has finished here
