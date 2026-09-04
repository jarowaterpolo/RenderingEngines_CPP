//
// Created by jaron on 04/09/2026.
//
#include "Functions.h"

bool IsEven(int number)
{
    return (number % 2 == 0);
}

int ReturnHighestNumber(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    }
    else {
        result = num2;
    }
    return result;
}

int GetAverage(int num1, int num2, int num3) {
    int result;
    result = (num1 + num2 + num3) / 3;
    return result;
}

int ReturnTheSum(int num1, int num2, int num3, int num4) {
    int result;
    result = num1 + num2 + num3 + num4;
    return result;
}

int ReturnTheTriangularNumber(int num) {
    int result = 0;
    for (int i = num; i > 0; i--) {
        result += i;
    }
    return result;
}

int ReturnTheFactorial(int num) {
    int result = 1;
    for (int i = num; i > 0; i--) {
        result *= i;
    }
    return result;
}

char ConvertToLetter(int num) {
    int offset = 96;
    char character = static_cast<char>(offset + num);
    return character;
}

int MultiplyByTwo(int value)
{
    return value * 2;
}

void MultiplyByReference(int& value)
{
    value *= 2;
}

void MultiplyByTwoWithoutReturn(int value)
{
    value *= 2;
}

void MultiplyByTwoWithPointer(int* value)
{
    *value *= 2;
}

int ReturnSmallestIntInTheArray(int array[], int arraySize)
{
    int smallestInt = array[arraySize];
    for (int i = 0; i < arraySize; i++) {
        if (array[i] < smallestInt) {
            smallestInt = array[i];
        }
    }
    return smallestInt;
}