#include<stdio.h>

int main()
{
    int n, i, f = 1,j;
    float e = 1.0;

    start:
        printf("Enter n value: ");
        scanf("%d", &n);
        if(n < 0)
        {
            printf("Please enter non-negetive value\n");
            goto start;
        }
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++)
            {
                f = f*j;
            }
            e = e + ((float)1/f);
            f = 1;
        }
        printf("Result is: %f\n",(float)e);
    return 0;
}
