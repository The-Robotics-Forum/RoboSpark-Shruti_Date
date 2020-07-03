#include<stdio.h>
#include<iostream>

using namespace std;

struct Student{
    int stud_id, stud_year;
    char stud_name[30];
    float stud_cgpa;
} records[5];

int main(){
    for(int i =0; i<5; i++){
        cout << "Enter your name:"<<endl;
        cin >> records[i].stud_name;
        cout << "Enter your id:"<<endl;
        cin >> records[i].stud_id;
        cout << "Enter your year:"<<endl;
        cin >> records[i].stud_year;
        cout << "Enter your cgpa:"<<endl;
        cin >> records[i].stud_cgpa;
    }

    for(int i =0; i<5; i++){
        cout << "Student No: "<< i <<endl;
        cout << records[i].stud_name<<endl;
        cout << records[i].stud_id<<endl;
        cout << records[i].stud_year<<endl;
        cout << records[i].stud_cgpa<<endl;
    }

    cout << "Entry Finished"<< endl;

    return 0;
}

