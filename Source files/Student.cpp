#include "../Header files/Student.h"

Student::Student(string name, string surname, int id, list<Course> courses) {
    this->name = name;
    this->surname = surname;
    this->id = isCorrectID(id);
    this->courses = courses;
}

int Student::isCorrectID(int id) {
    bool correct = false;
    while(correct == false) {
        if(to_string(id).size() == 8) {
            correct = true;
        } else {
            cout << "ID is not correct" << endl;
            cout << "Enter new ID number: ";
            cin >> id;
        }
    }
    return id;
}

void Student::student_info(const Student &student) {
    srand (time(NULL));
    cout << "Student Information: " << endl;
    cout << '|' << setw(15) << "NAME" << '|' << setw(15) << "SURNAME" << '|' << setw(15) << "COURSE NAME" << '|' << setw(15) << "LECTURER"  << '|'  << setw(15) << "Class Room" << "|\n";
    cout << '|' << setw(15) << name << '|' << setw(15) << surname << '|';
    int num = rand() % 3, count = 0;
    for(auto i = courses.begin(); i != courses.end(); i++) {
        if(num == count) {
            cout << setw(15) << i->getName() << '|' << setw(15) << i->getLecturer() << '|' << setw(15) << i->getClassRoom() << '|' << endl;
            break;
        }
        count++;
    }
    char choice;
    while(choice != 'Q') {
        cout << "======================" << endl;
        cout<<"Print N for the next course."<<endl;
        cout<<"Print A for the previous course."<<endl;
        cout<<"Print Q for terminating the program."<<endl;
        cout << "Enter the choice: ";
        cin >> choice;
        cout << "======================" << endl;

        int count1 = 0;
        int count2 = 0;
        switch(choice) {
            case 'N':
                for(auto i = courses.begin(); i != courses.end(); i++) {
                    if(count1 == (count+1)) {
                        cout << "Next Course: " << endl;
                        cout <<  '|' << setw(15) << i->getName() << '|' << setw(15) << i->getLecturer() << '|' << setw(15) << i->getClassRoom() << '|' << endl;
                        break;
                    }
                    count1++;
                }
                break;
            case 'A':
                for(auto i = courses.begin(); i != courses.end(); i++) {
                    if(count2 == (count-1)) {
                        cout << "Previous Course:" << endl;
                        cout << '|' << setw(15) << i->getName() << '|' << setw(15) << i->getLecturer() << '|' << setw(15) << i->getClassRoom() << '|' << endl;
                        break;
                    }
                    count2++;
                }
                break;
            case 'Q':
                break;
            default:
                cout << "Don't support such command" << endl;
                break;
        }
    }
}

void Student::timetable(const list<Student>& student_list) {
    cout << '|' << setw(15) << "NAME" << '|' << setw(15) << "SURNAME" << '|' << endl;
    for(auto i = student_list.begin(); i != student_list.end(); i++) {
        cout << '|' << setw(15) << i->name << '|' << setw(15) << i->surname << '|' << endl;
    }
    string name1, surname1;
    bool find;
    while(name1 != "Q") {
        cout << "======================" << endl;
        cout << "Print Name and Surname of the student from the list." << endl;
        cout << "Print Q for terminating the program." << endl;
        cout << "Enter the choice: ";
        cin >> name1;
        if(name1 == "Q") {
            break;
        }
        cin >> surname1;
        cout << "======================" << endl;
        for(auto i = student_list.begin(); i != student_list.end(); i++) {
            if((name1 == i->name) & (surname1 == i->surname)) {
                Student s = *i;
                s.student_info(s);
                find = true;
                break;
            }
        }
        if(!find) {
            cout << "Don't support such command or name and surname" << endl;
        }

    }
}

