#include <iostream>
#include <string>
using namespace std;


class student

{

public:

string name;
int roll;
int cgpa;
int year;

// Filling details :
void getInput()

{

std::cout << "Give the input:\n";
cout << "Name: ";
cin >> name;
cout << "Roll No: ";
cin >> roll;
cout << "CGPA ";
cin >> cgpa;
cout << "Year ";
cin >> year;

}


// To show student details :


void showDetails()

{

cout << "Name: " << name << endl;
cout << "Roll No:" << roll << endl;
cout << "CGPA: " << cgpa << endl;
cout << "Year: " << year << endl;

}
};
  

//only rank :

void showRank(int r)
{
    cout << "Rank :" << r << endl;

}


//only details :

void showRank (student s)
{
    s.showDetails();
    cout << "No Rank \n" ;
}


//both rank n details :

void showRank(int r, student s)
{
    s.showDetails();
    cout << "Rank :" << r << endl;
}


int main()
{
    int r;
    student s1;
    s1.getInput();
    cout << "rank (if unknown put 0) :" << endl;
    cin >> r;
    if (r == 0 )
    {
        showRank(s1);
    }
    else
    {
      showRank(r);
      showRank(r, s1);
    }

    return 0;
}