#include<stdio.h>

 int main()
{

  int x,i=0,num=0;

    printf("Enter a number: ");
    scanf("%d",&x);

     while(x>0 && x%2==0)
         {
            x/=2;
            num++;
         }
        printf("Number of times the number is divisible by 2 is: %d" , num);

    return 0;

}
