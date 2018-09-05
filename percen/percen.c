#include <stdio.h>
#include <unistd.h>

void remarks(float nPercentage);
int main()
{
    int no = 0, i = 0, tMarks = 0, fmarks = 0, all;
    char name[15];
    float per = 0.0;
    printf("Name : ");
    scanf("%s", &name);
    printf("\nTotal of Marks in a Subject - ");
    scanf("%i", &fmarks);
    printf("\n \nnumber of subjects : ");
    scanf("%i", &no);

    for (i = 0; i < no; i++)
    {
        int cur;
        printf("Marks in Subject %i - ", i + 1);
        scanf("%d", &cur);
        while (cur < 0 || cur > fmarks)
        {
            printf("Invalid Marks entered!!! \a ");
            printf("\nSubject %i - ", i + 1);
            scanf("%d", &cur);
        }

        tMarks = tMarks + cur;
    }

    per = (float)tMarks / (fmarks * no);
    printf("\n\n%s you got %d from %d ", name, tMarks, fmarks * no);
    printf("\nPercentage : %.2f \n", per * 100);
    remarks(per);
    system("pause");
    return 0;
}
void remarks(float perc)
{
    int per = perc * 100;
    if (per >= 90)
    {
        printf("Grade A\n");
    }
    else if (per >= 80)
    {
        printf("Grade B\n");
    }
    else if (per >= 70)
    {
        printf("Grade C\n");
    }
    else if (per >= 60)
    {
        printf("Grade D\n");
    }
    else if (per >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }
}
