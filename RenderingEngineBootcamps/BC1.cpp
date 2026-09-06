//
// Created by jaron on 06/09/2026.
//
#include <cstdio>
#include <string>
#include <format>
#include "BC1.h"
#include "Functions.h"
#include "DivisorChallenge.h"

typedef int J_Int;

struct Student {
    std::string name;
    J_Int id_number;
    J_Int age;
};
void PointerStuff()
{
    int a = 5;

    printf("%d \n",a);
    a = MultiplyByTwo(a);
    printf("%d \n",a);
    MultiplyByReference(a);
    printf("%d \n\n",a);

    int* pointerA;
    pointerA = &a;
    printf("value of a = %d\n", a);
    printf("pointerA = %p\n", pointerA);
    printf("value pointed to = %d\n\n", *pointerA);

    MultiplyByReference(a);

    printf("value of a = %d\n", a);
    printf("pointerA = %p\n", pointerA);
    printf("value pointed to = %d\n\n", *pointerA);

    int* pointerB;
    pointerB = &a;

    MultiplyByReference(*pointerB);

    printf("value of a = %d\n", a);
    printf("pointerA = %p\n", pointerA);
    printf("value pointed to = %d\n", *pointerA);
    printf("pointerB = %p\n", pointerB);
    printf("value pointed to = %d\n\n", *pointerB);

    printf("value of a = %d\n", a);
    MultiplyByTwoWithoutReturn(a);
    printf("value of a = %d\n", a);
    MultiplyByTwoWithPointer(&a);
    printf("value of a = %d\n", a);
}
void StaticArrays()
{
    int arrayOfInts[5];
    arrayOfInts[0] = 4;

    for (unsigned int i = 0; i < 5; i++) {
        printf("Element: %d = Value: %d Address: %p \n", (i+1), arrayOfInts[i], &arrayOfInts[i]);
    }

    int* arrayPointer = &arrayOfInts[0];
    printf("arrayPointer = %p\n", arrayPointer);
    printf("arrayPointer points to value = %d\n", *arrayPointer);

    arrayOfInts[1] = 7;
    arrayPointer++;
    printf("arrayPointer = %p\n", arrayPointer);
    printf("arrayPointer points to value = %d\n", *arrayPointer);

    Student ClassA[16];
    ClassA[0].name = "a";
    ClassA[0].age = 18;
    ClassA[0].id_number = 1;

    ClassA[1].name = "b";
    ClassA[1].age = 19;
    ClassA[1].id_number = 2;

    printf("Student (%s) \n-Age = %d \n-ID = %d \n", ClassA[2].name.c_str(), ClassA[2].age, ClassA[2].id_number);

    int StudentSizeInBytes = sizeof(Student);
    int ClassASizeInBytes = sizeof(ClassA);
    int ClassASize = ClassASizeInBytes / StudentSizeInBytes;

    printf("The size in bytes a single student takes = %d\n", StudentSizeInBytes);
    printf("The size in bytes of class a = %d\n", ClassASizeInBytes);
    printf("the total amount of students in class a = %d", ClassASize);
}
void DynamicArrays()
{
    int amountOfStudents = 20;
    Student* arrayOfStudents = new Student[amountOfStudents];

    arrayOfStudents[0].name = "a";
    arrayOfStudents[0].age = 18;
    arrayOfStudents[0].id_number = 1;

    arrayOfStudents[1].name = "b";
    arrayOfStudents[1].age = 19;
    arrayOfStudents[1].id_number = 2;

    for (int i = 0; i < amountOfStudents; i++) {
        printf("Student: %s \n-Age: %d\n-ID: %d\n", arrayOfStudents[i].name.c_str(), arrayOfStudents[i].age, arrayOfStudents[i].id_number);
    }

    printf("Array size = %d\n", sizeof(arrayOfStudents));

    delete[] arrayOfStudents;
}
void FirstExercisesBC1()
{
    PlaceStringLine("First Exercises");
    int input;
    printf("fill in any number to check if its even or odd \n");
    scanf("%d", &input);
    bool ageIsEven = IsEven(input);
    if (ageIsEven) {
        printf("your input is even\n");
    }
    else {
        printf("your input is odd\n");
    }
    printf("now fill in 2 numbers to check which is higher\n");
    int val1;
    int val2;
    scanf("%d %d", &val1, &val2);
    int highestNumber = ReturnHighestNumber(val1, val2);
    printf("highest number = %d\n", highestNumber);
    printf("now fill in 3 numbers to get their average\n");
    int val3;
    scanf("%d %d %d", &val1, &val2, &val3);
    int averageNumber = GetAverage(val1, val2, val3);
    printf("average number = %d\n", averageNumber);
    printf("now fill in 4 numbers to get their sum\n");
    int val4;
    scanf("%d %d %d %d", &val1, &val2, &val3, &val4);
    int sum = ReturnTheSum(val1, val2, val3, val4);
    printf("sum = %d\n", sum);
    PlaceStringLine("");
}
void SecondExercisesBC1()
{
    PlaceStringLine("Second Exercises");
    PointerStuff();
    PlaceStringLine("");
}
void ThirdExercisesBC1()
{
    PlaceStringLine("Third Exercises");
    int sizeOfArray = 10;

    printf("\nStatic array \n");

    int staticArrayOfInts[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++) {
        staticArrayOfInts[i] = i+1;
    }
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%d ", staticArrayOfInts[i]);
    }

    printf("\nDynamic odd array \n");

    int* dynamicArrayOfInts = new int[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++) {
        dynamicArrayOfInts[i] = 1 + 2*i;
    }
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%d \n", dynamicArrayOfInts[i]);
    }
    delete[] dynamicArrayOfInts;

    int randomOrderArray[10] {
        30,12,231,10,55,123,174,211,23,74
    };
    printf("The smallest int in the static array is = %d\n", ReturnSmallestIntInTheArray(randomOrderArray, sizeOfArray));

    StartDivisorChallenge();
    PlaceStringLine("");
}
void ArrayTests()
{
    StaticArrays();
    DynamicArrays();
}
void RunBootCamp1() {
    FirstExercisesBC1();
    SecondExercisesBC1();
    ThirdExercisesBC1();
    ArrayTests();
}