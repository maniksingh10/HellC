#include "stdio.h"

int main()
{

    factorial();
    pattern4();

    return 0;
}

void pyramid2(){
    int i, space, rows, k = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++, k = 0)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }

        while (k != 2 * i - 1)
        {
            printf("* ");
            k++;
        }

        printf("\n");
    }
}

void pyramid(){
    int rows, space, i, j;
    printf("How many rows - ");
    scanf("%d", &space);

    for (rows = 1; rows <= space; rows++)
    {
        for (j = space; j > 0; j--)
        {
            if (rows - j >= 0)
            {
                int p;
                for (p = rows * 2 + 1; p % 2 != 0; p++)
                {
                    printf(" *");
                }
            }
            printf("  ");
        }
        printf(" \n");
    }
}

void pattern4(){
    int num;
    printf("Enter how many - ");
    scanf("%d", &num);

    int i, j;

    for (i = num; i > 0; i--)
    {
        for (j = 1; j < i + 1; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}

void pattern3(){
    int num;
    printf("Enter how many - ");
    scanf("%d", &num);

    int i;
    int j;
    for (i = 1; i <= num; i++)
    {
        for (j = num + 1; j > i; j--)
        {
            printf(" A");
        }
        printf("\n");
    }
}

void pattern2(){
    int i, j;
    char input, alphabet = 'A';
    printf("Enter the character you want in last: ");
    scanf("%c", &input);
    for (i = 1; i <= (input - 'A' + 1); i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" %c", alphabet);
        }
        alphabet++;
        printf("\n");
    }
}

void pattern1(){
    int num;
    printf("Enter how many - ");
    scanf("%d", &num);

    int i;
    int j;
    for (i = 1; i <= num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
}

void largest3Nums(){
    int a, b, c;
    printf("Enter three numbers - ");
    scanf("%d"
          "%d"
          "%d",
          &a, &b, &c);

    if (a > b && a > c)
    {
        printf("\n   %d is the largest number", a);
    }
}

void factorial(){
    int num, ans = 1;
    printf("Enter a number to calculate its factorial\n");
    scanf("%d", &num);
    for (num; num > 0; num--)
    {
        ans *= num;
    }
    printf("Factorial is = %d\n", ans);
}

void forLoop(){
    int num;
    printf("\nEnter a number till count\n");
    scanf("%d", &num);

    int i;
    for (i = 1; i < num + 1; i++)
    {
        printf("Number is %d \n", i);
    }
}

void whileLoop(){
    int a = 1;
    while (a < 10)
    {
        a++;
    }
}

void oddNumber(){
    int i;
    for (i = 0; i < 20; i++)
    {
        if (i % 2 != 0)
        {
            printf(i);
        }
    }
}
