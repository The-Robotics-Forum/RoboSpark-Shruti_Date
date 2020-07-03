#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define MAX_SIZE 10

struct Stack{
    int top;
    char arr[MAX_SIZE];
} st;


bool isEmpty(){
    if(st.top == -1){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(st.top == MAX_SIZE-1){
        return true;
    }else{
        return false;
    }
}

void push(char item){
    if(isFull()){
            cout<<"Stack is full"<<endl;
    }else{
        st.top++;
        st.arr[st.top] = item;
    }
}

void pop(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        st.top--;
    }
}

char gettop(){
    return st.arr[st.top];
}

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') 
        return true;
	else if(opening == '{' && closing == '}') 
        return true;
	else if(opening == '[' && closing == ']') 
        return true;
	return false;
}

int main()
{
    char in_expr[MAX_SIZE];
    int length=0,i,j;

    st.top = -1;


    cout<<"Enter Brackets: "<<endl;
    gets(in_expr);

    length = strlen(in_expr);

    for(i=0;i<length;i++){
        if(in_expr[i] == '(' || in_expr[i] == '{' || in_expr[i] == '['){
                push(in_expr[i]);
        }else if(in_expr[i] == ')' || in_expr[i] == '}' || in_expr[i] == ']'){
            char a = gettop();
            if(isEmpty() || !ArePair(gettop(),in_expr[i])){
                cout<< "Not Balanced"<<endl;
                return 0;
            }else{
                pop();
            }
        }
    }
    if(isEmpty()){
        cout<< "Balanced"<<endl;
    }else{
        cout<< "Not Balanced"<<endl;
        }

    return 0;
}
