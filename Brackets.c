#include<stdio.h>
int push(char element, int *stack, int top)
{
    top = top +1 ;
    stack[top] = element;
    return top;
}


int pop( int top)
{
    top = top-1;
    return top;
}


int isRev(char element, int *stack, int top)
{
    if (stack[top]=="(")
    {
        if (element == ")")
        {
            return 1;
        }

        else
        {
            return 0;
        }
        
    }

    else if (stack[top]=="{")
    {
        if (element == "}")
        {
            return 1;
        }

        else
        {
            return 0;
        }
        
    }


    else if (stack[top]=="[")
    {
        if (element == "]")
        {
            return 1;
        }

        else
        {
            return 0;
        }
        
    }
    else 
    {
        return 0;
    }
}

int main()
{
    char stack[10], string[10];
    int top = -1;

    printf("Enter a string of brackets :");
    scanf("%s", string);


    int i =0;
    while (string[i]!='\0')
    {
        
        if(isRev(string[i], stack, top) && top >= 0)
        {
            top = pop(top);
        }

        else
        {
           top = push(string[i], stack, top);
        }
        i = i+1;
       
    }

    if( top == -1)
    {
        printf("The brackets are valid !!!");
    }

    else
    {
        printf("invalid Brackets !!!");
    }
return 0;
}
