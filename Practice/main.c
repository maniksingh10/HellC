#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, i;

  printf("Enter Number \n");
  scanf("%d", &a);

  for(i=0; i<10; i++){
    printf(" %d X %d = %d \n "  , a, i, a*i);
  }
}
