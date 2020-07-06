#include<iostream>

using namespace std;


class Student
{
    public:
        string name;
        int year;
        void getinput()
        {
            cout<<"Enter name :";
            cin>>name;
            cout<<"Enter Year :";
            cin>>year;
        }



void showRank()
{   cout<<"\nOutput :"<<endl;
    cout<<"Name :"<<this->name<<endl;
    cout<<"Year :"<<this->year<<endl;
}
void showRank(int r)
{   cout<<"\nOutput :"<<endl;
    cout<<"Name :"<<this->name<<endl;
    cout<<"Year :"<<this->year<<endl;
    cout<<"Rank : "<<r<<endl;
}
};

int main()
{   int n,rank;
    Student s1;
    s1.getinput();
    cout << "Enter :->\n(1) For printing student details. \n(2) For printing both rank and student details \n" << endl;
    cin >> n ;
    switch (n)
    {
    case 1:
        s1.showRank();//only student as an argument
        break;
    case 2:
        cout<<"Enter rank :";
        cin>>rank;
        s1.showRank(rank);//only student and rank
        break;
    default:
        cout << "Please Choose Correct Number to print Student Details.";
        break;
    }
}