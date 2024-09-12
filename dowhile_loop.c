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
    int i = 4;

    do
    {
      printf("countdown is %d\n",i);
      i--;
     sleep(1);
    } while(i>0);

    do
    {
      printf("countdown is %d\n",-1);
      sleep(1);
    } while(false);

    return 0;
}