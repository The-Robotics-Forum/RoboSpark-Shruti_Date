#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;
//STRUCT

typedef struct queue
{
    int arr[100];
    int front, rear;
}queue;

//INITIALATION QUEUE

void init(queue* q){
    q->front=0;
    q->rear=0;
}

//ENQUERING QUEUE

void enqueue(queue* q, int rollno){
    q->arr[q->rear++]=rollno;
    cout << "Enqueued roll no : "<< rollno <<endl;
    }

//CONDITION FOR CHECKING THE QUEUE IS FULL OR NOT...!

int isFull(queue* q){
    if (q->front > q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//STUDENT INFO
struct student_data
{   
    char name[25];
    int roll;
} student[100];


int main()
{
int n;

cout << "No of Students:"<<endl;
cin >> n;

//STDIN STUDENT INFO

for (int i = 0; i < n; i++)
{
    cout << "Enter student " << i+1 << " name: "<<endl;
    cin >> (student[i].name);
    cout << "Enter student " << i+1 << " roll no.: "<<endl;
    cin >> (student[i].roll);
}

    //MEMORY ALLOCATION

    queue *q1=(queue *)malloc(sizeof(queue));

    //INITIALATION OF QUEUE
    
    init(q1);
    
    //ENQUERING THE QUEUE
    
    for (int k = 0; k < n; k++)
    {   
        //EVEN NUMBER CONDITION
        
        if (student[k].roll%2==0)
        {   
            if (isFull(q1))
            {
                printf("\nQueue is filled");
            }
            else
            {  
                //ENQUERE OF THE QUEUE
                
                enqueue(q1, student[k].roll);    
            }
        }       
    }
    return 0;
}