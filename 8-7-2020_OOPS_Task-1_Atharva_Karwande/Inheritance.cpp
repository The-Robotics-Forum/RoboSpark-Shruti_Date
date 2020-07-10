#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Personal{
    protected:
        string name;
        string surname;
        string address;
        long long int mobile_no;
        string dob;
    public:
    void get_personal(){
    cout<<"Enter Personal Details:"<<endl;
    cout << "Enter name:"<<endl;
    cin>>name;
    cout << "Enter surname:"<<endl;
    cin>>surname;
    cout << "Enter address:"<<endl;
    getline(cin,address);
    getline(cin,address);
    cout << "Enter your mobile number:"<<endl;
    cin>>mobile_no;
    cout<<"Enter your date of birth:"<<endl;
    cin >> dob;
    cout<<"\n\n";
    }
};


class Professional{
    protected:
    string name_of_organization;
    string job_profile;
    string project;
    public:
        void get_professional(){
        cout << "Enter your name of organization:"<<endl;
        getline(cin,name_of_organization);
        cout << "Enter your job profile:"<<endl;
        cin>>job_profile;
        cout << "Enter your name of project:"<<endl;
        getline(cin,project);
        getline(cin,project);
        cout<<"\n\n";
        }
};


class Academic{
    protected:
        int year_of_passing;
        double cgpa;
        string college_name;
        string branch;
    public:
        void get_academic(){
            cout << "Enter the following details:"<<endl;
            cout << "Enter your year of passing:"<<endl;
            cin>>year_of_passing;
            cout << "Enter your Cgpa:"<<endl;
            cin>>cgpa;
            cout << "Enter your college name:"<<endl;
            getline(cin,college_name);
            getline(cin,college_name);
            cout << "Enter your branch:"<<endl;
            cin>>branch;
            cout<<"\n\n";
        }
};


class Biodata:public Personal,Professional,Academic{
    public:
        void display_biodata();
        void initialize(){
        get_personal();
        get_professional();
        get_academic();
    }
        void display_personal();
        void display_professional();
        void display_academic();
  };


 void Biodata::display_biodata(){
     display_personal();
     display_professional();
     display_academic();
 }
 void Biodata::display_personal(){
    cout << "Your Personal details are:"<<endl;
    cout << "Name:"<<name<<endl;
    cout << "Surname:"<<surname<<endl;
    cout << "Address:"<<address<<endl;
    cout << "Mobile number:"<<mobile_no<<endl;
    cout << "Date of Birth:"<<dob<<endl;
    cout <<endl;
    }

  void Biodata::display_professional(){
    cout << "Your Professional details are:"<<endl;
    cout << "Name of Organization:"<<name_of_organization<<endl;
    cout << "Job profile:"<<job_profile<<endl;
    cout << "Name of Project:"<<project<<endl;
    cout <<endl;
  }
  void Biodata::display_academic(){
    cout << "Your Academic details are:"<<endl;
    cout << "Year of passing:"<<year_of_passing<<endl;
    cout << "Cgpa:"<<cgpa<<endl;
    cout << "College Name:"<<college_name<<endl;
    cout << "Branch:"<<branch<<endl;
  }


int main(){
Biodata b1;

b1.initialize();
b1.display_biodata();//displays all the details

return 0;
 }