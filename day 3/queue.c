#include<stdio.h>
#include<stdlib.h>
  // Structure of student 

    typedef struct student 
    {
        int Roll_No;
        char name[20];
        
    }student;


 // structure of Queue

  typedef struct Queue 
  {
      struct student arr[10];
      int front, rear;

  }Queue;


  // Initialization of front n rear pointer

  void initialize (Queue* q)
  {
    q->front =0;
    q->rear =0;
  }

  // Enqueuing

  void enqueue (Queue* q , struct student* ptr)
  {
    q ->arr[q->rear++]= *ptr;
  }

  //Dequeuing

  int dequeue (Queue* q)
  {
    q ->arr[q->front++];
  }

  //Checking wheter the Queue is empty or not

  int isEmpty (Queue* q)
  {
    return q ->front == q ->rear;
  }


  // main

  int main ()
  {
    struct student s[10];
    // Student Dtails :
    //struct student s1;
    s[0].Roll_No = 1;
    strcpy(s[0].name, "Aradhya");


    //struct student s2;
    s[1].Roll_No = 2;
    strcpy(s[1].name, "Rutika");

    //struct student s3;
    s[2].Roll_No = 3;
    strcpy(s[2].name, "Saee");

    //struct student s4;
    s[3].Roll_No = 4;
    strcpy(s[3].name, "Gauravi");

    //struct student s5;
    s[4].Roll_No = 5;
    strcpy(s[4].name, "Rohit");

    //struct student s6;
    s[5].Roll_No = 6;
    strcpy(s[5].name, "Mayuri");

    //struct student s7;
    s[6].Roll_No = 7;
    strcpy(s[6].name, "Omkar");

    //struct student s8;
    s[7].Roll_No = 8;
    strcpy(s[7].name, "Shravani");

    //struct student s9;
    s[8].Roll_No = 9;
    strcpy(s[8].name, "Shweta");

    //struct student s10;
    s[9].Roll_No = 10;
    strcpy(s[9].name, "Rohan");


    Queue* q =(Queue*)malloc(sizeof(Queue));
    initialize(q);
    // adding even roll_nos to the queue "q"

    int i=0;
    int j=0;
    for(i=1; i<=9; i=i+2)
    {
      enqueue(q, &s[i]);
      printf("Roll Number:");
      printf("%d",q->arr[j].Roll_No);
      printf("   ");
      printf("Name :");
      printf(q->arr[j].name);
      printf("\n");
      j = j+1;
    }

    return 0;
  }