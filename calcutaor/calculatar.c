#include <stdio.h>
#include <unistd.h>

int main()
{
    float a, b;
    char o;

    while (1)
    {
        system("cls");
        printf("\nEnter like 5 + 8 \n\n");
        scanf("%f %c %f", &a, &o, &b);

        switch (o)
        {
        case '+':
            printf("add is %.2f + %.2f = %.2f", a, b, a + b);
            break;
        case '-':
            printf("sub is %.2f - %.2f = %.2f", a, b, a - b);
            break;
        case '*':
            printf("multiply is %.2f * %.2f = %.2f", a, b, a * b);
            break;
        case '/':
            printf("divide is %.2f / %.2f = %.2f", a, b, a / b);
            break;
        case'e':
            return 0;
            break;
        }
        printf("\n\n");
        system("pause");
    }
}
