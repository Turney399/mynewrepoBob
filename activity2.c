/**********************************************
*  Filename: dowhile_loop.c
*  Description: using do-while loops
*  Author: Bob Turney
*  Date: 3/7/2019
***********************************************/  
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main (void)
{
    int i = 11; // change between 4 and 11

    while (i<10)
    {
      printf("while %d\n", i);
      i++;
    }
    i=11;// change between 4 and 11
    do
    {
      printf("do %d\n",i);
      i++;
    } while(i<10);
    i=11;// change between 4 and 11
    for ( ; i < 10 ; i++)
    {
      printf("for %d\n", i);
     
    }

    return 0;
}