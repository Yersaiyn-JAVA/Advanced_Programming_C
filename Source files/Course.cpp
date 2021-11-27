#include "../Header files/Course.h"

Course::Course(string name, string lecturer, int classRoom) {
    this->name = name;
    this->lecturer = lecturer;
    this->classRoom = isCorrectClassRoom(classRoom);
}

int Course::isCorrectClassRoom(int classRoom) {
    bool correct = false;
    while(correct == false) {
        if(to_string(classRoom).size() == 3) {
            correct = true;
        } else {
            cout << "No such class room" << endl;
            cout << "Enter new class room number: ";
            cin >> classRoom;
        }
    }
    return classRoom;
}

const string &Course::getName() const {
    return name;
}

const string &Course::getLecturer() const {
    return lecturer;
}

int Course::getClassRoom() const {
    return classRoom;
}

