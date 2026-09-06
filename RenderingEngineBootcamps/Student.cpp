//
// Created by jaron on 06/09/2026.
//

#include <cstdio>
#include <string>
#include "Student.h"

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