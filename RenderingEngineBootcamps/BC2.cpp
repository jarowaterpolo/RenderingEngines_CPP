//
// Created by jaron on 06/09/2026.
//
#include <cstdio>
#include <string>
#include "BC2.h"
#include "Student.h"

class TestClass {
    //with constructor and destructor
    public:
        int value;
        TestClass();
        ~TestClass();
};
TestClass::TestClass()
{
    printf("Test class was created.\n");
    value = 0;
}
TestClass::~TestClass()
{
    printf("Test class was destroyed with value %d.\n", value);
}

struct ImportantThings {
    public:
        int length;
        std::string* things;
        ImportantThings(int length)
        {
            this->length = length;
            things = new std::string[length];
        }
        ~ImportantThings(void)
        {
            for (int i = 0; i < length; i++) {
                printf("Deleting things[%d]: %s\n", i, things[i].c_str());
            }
            delete[] things;
        }
        void addThing(int index, std::string thing)
        {
            things[index] = thing;
            printf("Adding thing at [%d]: %s\n", index, thing.c_str());
        }
    private:
        void printThing(int index)
        {
            printf("Thing [%d]: %s\n", index, things[index].c_str());
        }
};

struct Student {
    public:
        std::string name;
        int studyNumber;
        int modulesLength;
        std::string* modules;
        Student(std::string name, int number, int length)
        {
            this->name = name;
            this->studyNumber = number;
            this->modulesLength = length;
            printf("Student created with space for %d modules.\n", modulesLength);
            modules = new std::string[length];
        }
        ~Student(void)
        {
            for (int i = 0; i < modulesLength; i++) {
                printf("Deleting modules[%d]: %s\n", i, modules[i].c_str());
            }
            delete[] modules;
        }
        void updateName(std::string newName)
        {
            this->name = newName;
        }
        void addModule(int index, std::string module)
        {
            modules[index] = module;
            printf("Adding module at [%d]: %s\n", index, module.c_str());
        }
        void printStudentInfo()
        {
            printf("\n%s: \n"
            "-Student Id: %d \n"
            "-Modules: \n"
            ,name.c_str(), studyNumber);
            for (int i = 0; i < modulesLength; i++) {
                if (modules[i] != "") {
                    printf("%s\n", modules[i].c_str());
                }
            }
            printf("\n");
        }
};

void BasicConstuctorTest()
{
    printf("Test Classes\n");
    {
        TestClass cl1;
        cl1.value = 10;
        printf("CL1 = %d.\n", cl1.value);
    }

    TestClass* cl2 = new TestClass();
    cl2->value = 15;
    delete cl2;

    printf("Important Things structs\n");
    {
        ImportantThings It1(2);
        It1.addThing(0, "C++");
        It1.addThing(1, "OpenGL");
    }
    printf("ImportantThings dynamic struct\n");
    ImportantThings* It2 = new ImportantThings(2);
    It2->addThing(0, "C#");
    It2->addThing(1, "Unity");
    delete It2;
}

void FirstExercisesBC2()
{
    //accessing a single student
    Student S1("No Name",579704,5);
    S1.printStudentInfo();
    S1.updateName("Jaro");
    S1.printStudentInfo();
    S1.addModule(0, "Rendering Engines");
    S1.addModule(1, "Software Architecture");
    S1.addModule(2, "Game Systems");
    S1.addModule(3, "Core Skills");
    S1.addModule(4, "Personal Branding & Portfolio");
    S1.printStudentInfo();

    //student array
    Student studentGroup[2] {
        Student("S1",1,2),
        Student("S2",2,2)
    };

    //student array pointer
    Student* studentPointer = &studentGroup[0];
    studentPointer->printStudentInfo();
    studentPointer->updateName("Marit");
    studentPointer->printStudentInfo();
    studentPointer->addModule(0, "Ecology");
    studentPointer->addModule(1, "Plant Sciences");
    studentPointer->printStudentInfo();

    //student array reference
    Student& studentReference = studentGroup[1];
    studentReference.printStudentInfo();
    studentReference.updateName("Merel");
    studentReference.printStudentInfo();
    studentReference.addModule(0, "Art");
    studentReference.addModule(1, "Design");
    studentReference.printStudentInfo();
}

void SecondExercisesBC2()
{
    //accessing a single student
    NewStudentStruct S1("No Name",579704);
    S1.printStudentInfo();
    S1.updateName("Jaro");
    S1.printStudentInfo();
    S1.addModule("Rendering Engines");
    S1.addModule("Software Architecture");
    S1.addModule("Game Systems");
    S1.addModule("Core Skills");
    S1.addModule("Personal Branding & Portfolio");
    S1.printStudentInfo();

    //student array
    NewStudentStruct studentGroup[2] {
        NewStudentStruct("S1",1),
        NewStudentStruct("S2",2)
    };

    //student array pointer
    NewStudentStruct* studentPointer = &studentGroup[0];
    studentPointer->printStudentInfo();
    studentPointer->updateName("Marit");
    studentPointer->printStudentInfo();
    studentPointer->addModule("Ecology");
    studentPointer->addModule("Plant Sciences");
    studentPointer->printStudentInfo();

    //student array reference
    NewStudentStruct& studentReference = studentGroup[1];
    studentReference.printStudentInfo();
    studentReference.updateName("Merel");
    studentReference.printStudentInfo();
    studentReference.addModule("Art");
    studentReference.addModule("Design");
    studentReference.printStudentInfo();

    NewStudentStruct S2 = studentGroup[0];
    NewStudentStruct S3("a no one", 3);
    S2.printStudentInfo();
    S3.printStudentInfo();
    S3 = S2;
    S2.printStudentInfo();
    S3.printStudentInfo();

}

void RunBootCamp2()
{
    // BasicConstuctorTest();
    // FirstExercisesBC2();
    SecondExercisesBC2();
}

