#include <iostream>
#include <string>
using namespace std;


class student 
{
 public: 
    
    // Student Data : 
    
    string name;
    int roll;
    float cgpa;
    int year;
    
    // Dyanamic memory allocation for storing marks of 5 subjects :
    
    int* marks = new int[5];
    
    int total_marks;
    
    
    // Initialization of data :
    
    student()
    {
        cout << "Initial Data Displayed. \n";
        name = "Unknown";
        roll = 00;
        cgpa = 10;
        year = 1;
        int i = 0;
        for (i=0; i<5; i++)
        {
            marks[i] = 0;
        }
        total_marks = 0;
        
    }
    
    
    //Function to take input:
    
    void getInput ()
    {
        std::cout << "Enter the student details :\n";
        cout << "Name :\n";
        cin >> name;
        cout << "Roll_No :\n";
        cin >> roll;
        cout << "Year :\n";
        cin >> year;
        cout << "Marks of 5 subjects each out 100:\n";
        int i=0;
        for (i=0; i<5; i++)
        {
            cin >> marks[i];
        }
        cout << "Dtails are filled sucessfully!!!\n";
        
    }
    
    //Function to return total marks:
    
    void total ()
    {
        int sum=0;
        int i = 0;
        for (i=0; i<5; i++)
        {
            sum = sum + marks[i];
        }
        
        total_marks = sum;
        
    }
    
    
    //Function to calculate and store CGPA:
    
    void cal_cgpa ()
    {
        cgpa = total_marks/50;
    }
    
    
    //Function to display data:
    
    void showDetails ()
    {
        cout << "Student's Data :\n";
        cout << "Name: " << name << endl;
        cout << "Roll_No: " << roll << endl;
        cout << "Year: " << year << endl;
        cout << "Total_Marks: " << total_marks << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    // Initialized data display:
    student s1;
    s1.showDetails ();
    
    //Getting input:
    s1.getInput ();
    s1.total ();
    s1.cal_cgpa ();
    s1.showDetails ();

    return 0;
}
