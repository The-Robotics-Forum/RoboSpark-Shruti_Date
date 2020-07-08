#include <iostream>

#include <string.h>

using namespace std;


class String

{

private:

int size;

char *arr;


public:

String()

{

size = 15;

arr = new char[15];

}


String(int size)

{

this->size = size;

arr = new char[size];

}



String(char *s)

{

size = strlen(s);

arr = new char[size];



for (int i = 0; i < size; i++)

arr[i] = s[i];

}



void operator=(char *s);

void display();


String operator+(String s);

String operator*(int n);

int length();

String append(String s);

friend String operator*(int n, String & str);
friend ostream& operator << (ostream &cout, String &str);
};



int String :: length()

{
return size;

}



void String::display()

{

cout << "String: " << arr << endl;

}



void String::operator=(char *s)

{

size = strlen(s);

arr = new char[size];



for (int i = 0; i < size; i++)

arr[i] = s[i];

}



String String::operator+(String s)

{

String temp(size + s.size);



//copy first string

int k = 0;

for (int i = 0; i < size; i++)

{

temp.arr[k++] = arr[i];

}



//copy second string

for (int i = 0; i < s.size; i++)

{

temp.arr[k++] = s.arr[i];

}



return temp;

}



String String::operator*(int n)

{

String temp(size*n);

int k = 0;

while(n--)

{

for(int i = 0; i < size; i++)

{

temp.arr[k++] = arr[i];

} 

}

return temp;



}



String String::append(String s)

{

String temp(size + s.size);



//copy first string

int k = 0;

for (int i = 0; i < size; i++)

{

temp.arr[k++] = arr[i];

}



//copy second string

for (int i = 0; i < s.size; i++)

{

temp.arr[k++] = s.arr[i];

}



return temp;

}


String operator*(int n, String & str)
{
String temp(n);

int k = 0;

while(n--)

{

for(int i = 0; i < str.size; i++)

{

temp.arr[k++] = str.arr[i];

} 

}

return temp;    
}

//overloading cout:
ostream& operator << (ostream &cout, String &str)
{
    cout << "String: ";
    for (int i=0; i < str.size; i++)
    {
        cout << str.arr[i] ;
    }

    cout << endl;
    return cout;
}
int main()

{

String s1 = "Rutika ";

String s2 = "Deshmukh ";

String s3 = "Operator Overloading ";

// addition :
(s1+s2).display();

// multiple addition and cout overloading:
(s1+ s2+ s3).display(); 

// multiplication :
(s1 * 2).display();

(2 * s3).display();

//cout :
cout << s1 << endl;
}