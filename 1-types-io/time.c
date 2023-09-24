//
// Created by 14806 on 2023/9/23.
//
#include<stdio.h>
int main(void)
{
    int day,year,hour,minute,second;
    char month[20];
    char week[20];
    scanf("%s%d%d%s%d%d%d",month,&day,&year,week,&hour,&minute,&second);
    printf("%.3s %.3s %.2d %.2d:%.2d:%.2d %.4d",
           week,month,day,hour,minute,second,year);
    return 0;
}
