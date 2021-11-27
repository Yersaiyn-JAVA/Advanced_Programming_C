#ifndef FINALEXAM_COURSE_H
#define FINALEXAM_COURSE_H
#include <iostream>
using namespace std;

class Course {
private:
    string name;
    string lecturer;
    int classRoom;
public:
    Course(string name, string lecturer, int classRoom);
    int isCorrectClassRoom(int classRoom);

    const string &getName() const;

    const string &getLecturer() const;

    int getClassRoom() const;
};


#endif

