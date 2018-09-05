#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int i,len;
   char name[20] ;

    printf("\nEnter your Name  ");
    scanf("%s",&name);

    len = strlen(name);
    printf("%s",name);

    for(i=0;i<len;i++ ){

        printf("\t%c . \n",name[i]);
    
    }

}
