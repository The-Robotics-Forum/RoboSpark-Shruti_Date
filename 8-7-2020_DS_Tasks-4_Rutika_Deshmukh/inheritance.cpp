#include<bits/stdc++.h>
using namespace std;

// Multiple Inheritance

class Personal {
  protected:
    string name;
    string surname;
    string addr;
    string DOB;
    int Mob;

    Personal() {
      name ="Rutika";
      surname = "Deshmukh";
      addr = "VIT";
      DOB = "02-06-2001";
      Mob = 654372;   
     }

    void get_Personal() {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter surname: " << endl;
        cin >> surname;
        cout << "Enter address: " << endl;
        cin >> addr;
        cout << "Enter date of birth: " << endl;
        cin >> DOB;
        cout << "Enter mobile number: " << endl;
        cin >> Mob;
     }

    
};

class Professional {
  protected:
    string organisation;
    string jobprof;
    string proj;

    Professional() {
    organisation = "XXX";
    jobprof = "xxDeveloper";
    proj = "The---";
    }

    void get_Proff() {
        cout << "Enter organisation: " << endl;
        cin >> organisation;
        cout << "Enter job profile: " << endl;
        cin >> jobprof;
        cout << "Enter project: " << endl;
        cin >> proj;
     }
    
}; 

class Academic {
  protected:
    int year;
    float cgpa;
    string college;
    string branch;

    Academic() {
    year = 2020;
    cgpa = 9;
    college = "VIT";
    branch = "CS";
    }

    void get_Acad() {
    cout << "Enter year: " << endl;
        cin >> year;
        cout << "Enter CGPA: " << endl;
        cin >> cgpa;
        cout << "Enter college: " << endl;
        cin >> college;
        cout << "Enter branch: " << endl;
        cin >> branch;
    }
};

class Biodata : public Personal, public Professional, public Academic {
    public:
     void get_Input() {
        get_Personal();
        get_Proff();
        get_Acad();
     }
  };

int main()
{  
  Biodata b;
  b.get_Input();   // accessing the protected members of the base class via derived class
}