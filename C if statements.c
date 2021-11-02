#include<stdio.h>

int main()
{
    int age = 48;
    int placecode = 12;

    if(age>48)
    {
        printf("You are eligible to try\n");
    }
    else if(age == 48)
    {
        printf("You are not eligible to try\n");
    }
    else{
        printf("Sorry you are a kid\n ");
    }
    return 0;
}
