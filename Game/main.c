#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, a, b, sum, sum1;
    while (1)
    {
        printf("\n");
        system("pause");
        system("cls");
        printf("\n-------- maths nhi aati kyaa to ye program use KARO --------");
        printf("\n\n 1. addition");
        printf("\n 2. subtraction");
        printf("\n 3. multiply");
        printf("\n 4. division");
        printf("\n 5. first N numbers");
        printf("\n 0. exit");
        printf("\n enter your choice ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("enter 2 number ");
            scanf("%d%d", &a, &b);
            sum = a + b;
            printf("\n ans is %d", sum);
            break;
        case 2:
            printf("enter two number "); //for subtraction
            scanf("%d%d", &a, &b);
            sum = a - b;
            printf("\n ans is %d", sum);
            break;
        case 3:
            printf("\n enter 2 number "); //multiply
            scanf("%d%d", &a, &b);
            sum = a * b;
            printf("\n ans is %d", sum);
            break;
        case 5:
            printf("\n enter a number "); //program for first N number
            scanf(" %d", &a);
            for (b = 1; b <= a; b++)
                printf(" %d", b);
            break;
        case 4:
            printf("\n enter 2 number "); //division
            scanf("%d%d", &a, &b);
            sum = a / b;
            sum1 = a % b;
            printf("\n quatoinent is %d and remainder is %d", sum, sum1);
            break;
        case 0:
            printf("\nThank You Chal nikal BC \n");
            return 0;
            break;
        default:
            printf("\n tauu pad ke aja");
        }
    }
}
