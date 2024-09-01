#include <stdio.h>
// Standard Input Output Header Library Function has been declared
int main() // Main Function has been declared
{ // Code Block has started from here
  char word = 'L'; // word variable has been declared as character data type and assigned value L
  int number = 21; // number variable has been declared as integer data type and assigned value 21
  float g = 9.8; // g variable has been declared as float data type and assigned value 9.8
  double pi = 3.1416; // pi variable has been declared as double data type and assigned value of π 
  printf("Character Value: %c\n", word); // printf has been used for printing "Character Value: " & using %c which is a format specifier for character data type to pass the word variable. Finally \n has been used for creating new line
  printf("Integer Value: %d\n", number); // Just like before, the %d format specifier, which is used for integer data types, has been passed for the number variable.
  printf("Value of g in Float: %f\n", g); // this time %f has been passed to print the float variable g
  printf("Value of Pi in Double: %lf\n", pi); // Finally for double data type %lf has been passed for printing pi variable inside the double quotes
  return 0; // return 0 has been passed to indicate that program is executed successfully
} // Code Block has ended here
