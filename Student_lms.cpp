// Student_lms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
#include <vector>
#include <map>
#include<set>
#include <algorithm> // Required for transform
#include <cctype>    // Required for tolower
#include "person.h"
#include "student.h"

vector <student> students;
map <int, set<string>> courses;


// ============== add_student() =====================


void add_student() {
    int    ids;
    string name;
    double gpa;

    cout << "\n--- Add Student ---\n";
    cout << "Enter Student ID: ";
    
    cin >> ids;
    for (int i = 0; i < students.size(); i++) {
        if (ids == students[i].get_id())
        {
            cout << "Already here" << endl;
            return ;
        };
    }
    cout << "Enter Student Name: ";

    cin >> name; 

    cout << "Enter Student GPA: ";

    cin >> gpa;
    if (gpa >= 0 && gpa <= 4) {
        cout << "GPA added Succesfully" << endl; 
    }
    else {
        cout << "GPA must be between 0.0 and 4.0" <<endl;
        return;
    }

    students.push_back(student(ids, name, gpa));
    cout << "Student added successfully!" << endl;


}


// ============== remove_student() =====================

void remove_student() {
    int    ids;

    cout << "\n--- Remove Student ---\n";

    cout << "Enter Student ID to remove: ";

    cin >> ids;
    for (int i = 0; i < students.size(); i++) {
        if (ids == students[i].get_id() ){
            students.erase(students.begin() + i);
            return; 

        }
        
        
    }
            cout << "ID isn't Exist";
}



// ============== search_student() =====================

void search_student() {
    int ids;
    cout << "\n--- Search Student ---\n";

    cout << "Enter Student ID to Search: ";
    cin >> ids;


    for (int i = 0; i < students.size(); i++) {
        if (ids == students[i].get_id()) {

            cout << students[i].get_id() << " "
                << students[i].get_name() << " "
                << students[i].get_gpa() << endl;
            return;
        }
            
    }
    
    cout << "ID isnt Exist";


}


// ============== all_student() =====================

void all_student() {
    int ids;

    cout << "\n--- ALL Students List ---\n";


    for (int i = 0; i < students.size(); i++) {
        cout <<"ID : " << students[i].get_id() << " "
            <<"Name : " <<  students[i].get_name() << " "
            <<"GPA : " << students[i].get_gpa() << endl;
    }

}


// ============== enroll_in_course() =====================

void enroll_in_course() {
    int ids;
    cout << "\n--- Enroll Student to Course---\n";

    cout << "Enter Student ID to Search: ";
    cin >> ids;

    for (int i = 0; i < students.size(); i++) {
        if (ids == students[i].get_id()) {

            string course;
            cout << "Enter The Course of Student : " << endl;

            cin >> course;

            transform(course.begin(), course.end(), course.begin(),
                [](unsigned char c) { return std::tolower(c); });

            courses[ids].insert(course);

            cout << "The Course " << course << "added Successfully to Id :" << ids << endl;

            return;
        }


    }
    cout << "ID isnt Exist";

}



// ============== show_coursee() =====================
void show_course() {
    int ids;

    cout << "\n--- Show Student to Course---\n";

    cout << "Enter Student ID to Search: ";
    cin >> ids;

    for (auto c : courses[ids]) {

        cout << c << endl;
    }
}

// ============== sort_by_gpa() =====================
void sort_by_gpa() {
    sort(students.begin(), students.end(),
        [](student a, student b) {          
            return a.get_gpa() > b.get_gpa(); 
        });
}


int main()
{
    while (true) {
        cout << "===============================" << endl;
        cout << "Welcome To Student LMS System" << endl;
        cout << "===============================" << endl;

        cout << "Choose your Operation : ( 1 - 8 ) " << endl;

        cout << "1 -> Add Student" << endl;
        cout << "2 -> Remove Student" << endl;
        cout << "3 -> Search Student" << endl;
        cout << "4 -> Display All student" << endl;
        cout << "5 -> Enroll student to Course" << endl;
        cout << "6 -> Show All student courses" << endl;
        cout << "7 -> sort Students by gpa" << endl; 
        cout << "8 -> EXIT " << endl;


        int choose;

        cin >> choose;
        if (choose >= 1 && choose <= 8) {
            switch (choose) {
            case 1: add_student(); break;
            case 2: remove_student(); break;
            case 3:search_student(); break;
            case 4:all_student();break;
            case 5:enroll_in_course(); break;
            case 6:show_course();break;
            case 7:sort_by_gpa();break;
            case 8:
                cout << "\nThank you for using Student LMS System. Goodbye!\n" << endl;
                return 0;

            }
        }

        //add_student();
        //add_student();

        //search_student();

        //for (int i = 0; i < students.size(); i++) {
        //    cout << students[i].get_id() << " "
        //        << students[i].get_name() << " "
        //        << students[i].get_gpa() << endl;
        //}

        //remove_student();

        //for (int i = 0; i < students.size(); i++) {
        //    cout << students[i].get_id() << " "
        //        << students[i].get_name() << " "
        //        << students[i].get_gpa() << endl;
        //}
        //}

    }
}

