/**********************************************
*  Filename: while_loop.c
*  Description: using while loops
*  Author: Bob Turney
*  Date: 3/7/2019
***********************************************/  
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main (void)
{
    int i = 10;

    while(i>0)
    {
      printf("countdown is %d\n",i);
      i--;
     sleep(1);
    }

    while(233 == 1)
    {
      printf("countdown is %d\n",-1);
      sleep(1);
    }
    return 0;
}