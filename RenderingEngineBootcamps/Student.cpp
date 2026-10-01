//
// Created by jaron on 06/09/2026.
//

#include <cstdio>
#include <string>
#include "Student.h"
#pragma region Constructors

NewStudentStruct::NewStudentStruct() : studyNumber(0)
{
    printf("student created with default constructor\n");
}
NewStudentStruct::NewStudentStruct(std::string name, int number) : studyNumber(number)
{
    printf("student created with custom constructor\n");
    this->name = name;
}
NewStudentStruct::NewStudentStruct(const NewStudentStruct& anotherStudent) : studyNumber(anotherStudent.getStudyNumber())
{
    printf("student created with copy constructor\n");
    this->name = anotherStudent.name;
    this->modules = anotherStudent.modules;
}
NewStudentStruct::~NewStudentStruct(void)
{
    printf("student deleted with default destructor\n");
};
NewStudentStruct& NewStudentStruct::operator=(const NewStudentStruct& anotherStudent)
{
    if (this == &anotherStudent) {
        return *this;
    }

    this->name = anotherStudent.name;
    this->modules = anotherStudent.modules;

    printf("student changed with assign operator\n");
    return *this;
}

#pragma endregion Constructors

void NewStudentStruct::updateName(std::string newName)
{
    this->name = newName;
}
void NewStudentStruct::addModule(std::string module)
{
    modules.push_back(module);
    printf("Adding module %s\n", module.c_str());
}
void NewStudentStruct::printStudentInfo()
{
    printf("\n%s: \n"
    "-Student Id: %d \n"
    "-Modules: \n"
    ,name.c_str(), studyNumber);
    for (int i = 0; i < modules.size(); i++) {
        printf("%s\n", modules[i].c_str());
    }
    printf("\n");
}