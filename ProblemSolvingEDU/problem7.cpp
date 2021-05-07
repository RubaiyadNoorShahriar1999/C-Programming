#include <stdio.h>
int main()
{
    int num,i,f;
    i=f=1;

    printf("Enter the number : ");
    scanf("%d",&num);

    while(i<=num)
    {
        f=f*i;
        i++;
    }
    printf("It's Factorial: %d",f);
    return 0;
}
