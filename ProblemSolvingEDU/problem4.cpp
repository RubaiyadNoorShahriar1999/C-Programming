#include <stdio.h>
#include <limits.h>

int main()
{
    int x,
        max_num = INT_MIN,
        min_num = INT_MAX,
        diff = 0;
    printf("Enter a number: ");
    while(1)
    {
        scanf("%d", &x);
        if(x == -1)
            break;

        if(x > max_num)
            max_num = x;
        if(x < min_num)
            min_num = x;
    }

    diff = max_num - min_num;

    printf("Result: %d\n", diff);

    return 0;
}
