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
    //printf("%c %c \n", element, stack[top]);
    if (stack[top]=='(')
    {
        if (element == ')')
        {
            return 1;
        }

        else
        {
            return 0;
        }
        
    }

    else if (stack[top]=='{')
    {
        if (element == '}')
        {
            return 1;
        }

        else
        {
            return 0;
        }
        
    }


    else if (stack[top]=='[')
    {
        if (element == ']')
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

   /* top = push(string[0], stack, top);
    printf("Stack : %s\n",stack);
    
    top = pop(top);
    printf("stack : %S \n", stack);
    printf("top :%d \n",top);

    top = push(string[2], stack, top);
    printf("stack : %s \n", stack);
    printf("top :%d \n",top); 
    
    int x = isRev('}', stack, top);
    printf("%d", x);
    */

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
       // printf("%s \n", stack);
       
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
