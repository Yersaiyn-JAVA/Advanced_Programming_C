#ifndef FINALEXAM_STUDENT_H
#define FINALEXAM_STUDENT_H
#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include "Course.h"
using namespace std;

class Student {
private:
    string name;
    string surname;
    int id;
    list<Course> courses;
public:
    Student(string name, string surname, int id, list<Course> courses);
    int isCorrectID(int id);
    void student_info(const Student& student);
    void timetable(const list<Student>& student_list);
    void operator = (const Student & other) {
        this->name = other.name;
        this->surname = other.surname;
        this->id = other.id;
        this->courses = other.courses;
    }
};


#endif

