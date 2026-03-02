#include <iostream>
#include <string>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Student {
    string name;
    int grade;
};

Student* findTopStudent(Student arr[], int size) {


    int max = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i].grade > arr[max].grade) {
            max = i;
        }
    }

    return &arr[max];
}

int main() {

    Student students[3] = {
        {"Mohamed", 95},
        {"Magdy", 92},
        {"Amin", 78}
    };

    Student* topStudent = findTopStudent(students, 3);

    if (topStudent != nullptr) {

        cout << "Top Student: " << topStudent->name << endl;
        cout << "Grade: " << topStudent->grade << endl;
    }

    return 0;
}
