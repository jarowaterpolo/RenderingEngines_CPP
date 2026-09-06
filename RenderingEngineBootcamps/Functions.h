//
// Created by jaron on 04/09/2026.
//

#ifndef CLASSES_FUNCTIONS_H
#define CLASSES_FUNCTIONS_H

#include <string>

bool IsEven(int number);
int ReturnHighestNumber(int num1, int num2);
int GetAverage(int num1, int num2, int num3);
int ReturnTheSum(int num1, int num2, int num3, int num4);
int ReturnTheTriangularNumber(int num);
int ReturnTheFactorial(int num);
char ConvertToLetter(int num);
int ReturnRandomNumber(int min, int max);
int MultiplyByTwo(int value);
void MultiplyByReference(int& value);
void MultiplyByTwoWithoutReturn(int value);
void MultiplyByTwoWithPointer(int* value);
int ReturnSmallestIntInTheArray(int array[], int arraySize);
void PlaceStringLine(std::string message);


#endif //CLASSES_FUNCTIONS_H
