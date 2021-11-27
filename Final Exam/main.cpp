#include <iostream>
#include "../Header files/Course.h"
#include "../Header files/Student.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    srand (time(NULL));
    Course course("C++", "Yerasyl", 123);
    Course course1("Electronics", "Aigerim", 252);
    Course course2("Signals", "Sanzhar", 257);
    Course course3("PE", "Yersin", 231);
    list<Course> courses {course, course1, course2, course3};
    Student student("Yersaiyn", "Bushanov", 12345678, courses);
    Student student1("Arystan", "Amangeldi", 20180703, courses);
    Student student2("Kainar", "Berkin", 20287612, courses);
    list<Student> students {student, student1, student2};
    student.timetable(students);
    return 0;
}

