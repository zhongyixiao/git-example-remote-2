//
// Created by 14806 on 2023/9/15.
//
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int high=100;
    int chance=7;
    printf("The computer will generate a random number between 1 and 100\n");
    printf("You will have 7 chance\n");
    int secret=rand() % high + 1;
    int guass;
    scanf("%d",&guass);
    srand(time(NULL));
    while(chance>0)
    {
        scanf("%d",&guass);
        if(guass==secret)
        {
            printf("You Win!\n");
            break;
        }
        else if(guass>secret)
        {
            printf("greater\n");
        }
        else
        {
            printf("smaller\n");
        }
        chance--;
    }
    return 0;
}