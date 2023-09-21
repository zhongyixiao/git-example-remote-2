//
// Created by 14806 on 2023/9/20.
//
//判断闰年
#include<stdio.h>
int main()
{
    int year=0,sum=0;
    for(year=1000;year<=2000;year++)
    {
        if(year%4==0 && year%100!=0)
        {
            printf("%d ",year);
            sum++;
        }
        else if(year%400==0)
        {
            printf("%d ",year);
            sum++;
        }
    }
    printf("\n%d\n",sum);
    return 0;
}