#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;

    printf("\n\n Is number processor available?\n");
    if(system(NULL))
    {
        printf("Command processor available!\n");
    }
    else
    {
        printf("Command processor is not available!!\n ");
        exit(1);
    }
    printf ("Executing command DIR\n");
    x=system ("dir");
    printf ("Returned value is: %d.\n",x);




    return 0;
}
