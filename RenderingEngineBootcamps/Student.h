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
        NewStudentStruct() : studyNumber(0)
        {
            printf("student created with default constructor\n");
        }
        NewStudentStruct(std::string name, int number) : studyNumber(number)
        {
            printf("student created with custom constructor\n");
            this->name = name;
        }
        NewStudentStruct(const NewStudentStruct& anotherStudent) : studyNumber(anotherStudent.getStudyNumber())
        {
            printf("student created with copy constructor\n");
            this->name = anotherStudent.name;
            for (std::string module : anotherStudent.modules) {
                modules.push_back(module);
            }
        }
        ~NewStudentStruct(void)
        {
            printf("student deleted with default destructor\n");
        };
        NewStudentStruct& operator=(const NewStudentStruct& anotherStudent)
        {
            printf("student changed with assign operator\n");
            return *this;
        }

        std::string getName() const {return this->name;}
        int getStudyNumber() const {return this->studyNumber;}

        void updateName(std::string newName);
        void addModule(std::string module);
        void printStudentInfo();
};

#endif //RENDERINGENGINEBOOTCAMPS_STUDENT_H
