#ifndef MATHUTILS_H
#define MATHUTILS_H

#include <string>
#include <vector>

// Explicitly use std:: instead of a using directive
bool isItOdd(int number);
int lowerNumberOdd(int firstNum);
int upperNumberOdd(int secondNum);
bool errorCheck(int firstNum, int secondNum);
void allOddNumbers(int firstName, int secondNum);
void addSquaredOddNumbers(int firstNum, int secondNum);
//***********EVEN Functions********

bool isItEven(int number);
int lowerNumberEven(int firstNum);
int upperNumberEven(int secondNum);
void addEvenNumbers(int firstNum, int secondNum);

#endif
