#include <stdio.h>

int main()
{
    while(1)
    {
        int x = 0, y = 0, res = 1;
        printf("Enter base: ");
        scanf("%d", &x);

        printf("Enter exponent: ");
        scanf("%d", &y);

        while(y--)
        {
            res = x * res;
        }
        printf("Result: %d\n", res);
    }

    return 0;
}
