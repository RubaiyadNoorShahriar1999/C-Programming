#include<stdio.h>

int main(){

int a,b,sum,sub,mul,add,mod;
char op;
    printf("Enter an operator (+, -, *,/,%): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);

    switch (op) {
    case '+':
        printf("%d + %d= %d", a,b, a+b);
        break;
    case '-':
        printf("%d- %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d*%d = %d",a,b, a*b);
        break;
    case '/':
        printf("%d / %d= %d",a,b, a/b);
        break;
    default:
        printf("mod = %d", a%b);
    }


return 0;
}
