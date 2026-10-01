//
// Created by jaron on 06/09/2026.
//

#ifndef RENDERINGENGINEBOOTCAMPS_STUDENT_H
#define RENDERINGENGINEBOOTCAMPS_STUDENT_H

#include <string>
#include <vector>

struct NewStudentStruct {
    private:
        std::string name;
        const int studyNumber;
        std::vector<std::string> modules;
    public:
        NewStudentStruct();
        NewStudentStruct(std::string name, int number);
        NewStudentStruct(const NewStudentStruct& anotherStudent);
        ~NewStudentStruct(void);
        NewStudentStruct& operator=(const NewStudentStruct& anotherStudent);

        std::string getName() const {return this->name;}
        int getStudyNumber() const {return this->studyNumber;}

        void updateName(std::string newName);
        void addModule(std::string module);
        void printStudentInfo();
};

#endif //RENDERINGENGINEBOOTCAMPS_STUDENT_H
