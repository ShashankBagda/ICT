//	Practical - 05 : Implementations of Infix to Postfix Transformation and its evaluation program
//	Shashank Bagda - 92100133020

#include <iostream>
using namespace std;

struct stack
{
    char exp;
    struct stack *next;
};

void push(int);
int pop();
int precedence(char);

struct stack *top = NULL;

int main()
{
    char infix[20], postfix[20];
    int i = 0, j = 0;

    printf("ENTER INFIX EXPRESSION: ");
    gets(infix);

    while(infix[i] != '\0')
    {
        if(isalnum(infix[i]))
            postfix[j++] = infix[i];
        else
        {
            if(top == NULL)
                push(infix[i]);

            else
            {
                while( top != NULL && 
                      (precedence(top->exp) >= precedence(infix[i])) ) 
                    postfix[j++]=pop();
                push(infix[i]);
            }
        }

        ++i;
    }

    while(top != NULL)
        postfix[j++] = pop();

    postfix[j] = '\0';
    puts(postfix);
    getchar();
    return 0;
}

int precedence(char x)
{
    switch(x)
    {
    case '^': return 4;
    case '*':
    case '/': return 3;
    case '+':
    case '-': return 2;

    default: return 0;
    }
}

void push(int x)
{
    int item;
    struct stack *tmp;

    if(top == NULL)
    {
        top->exp = x;
        top->next = NULL;
    }

    else
    {
        tmp = top;
        top->exp = x;
        top->next = tmp;
    }
}

int pop()
{
    struct stack *tmp;
    int item;

    if(top == NULL)
        puts("EMPTY STACK");

    else if(top->next == NULL)
    {
        tmp = top;
        item = top->exp;
        top = NULL;
    }

    else
    {
        tmp = top;
        item = top->exp;
        top = top->next;
    }

    return item;
}
