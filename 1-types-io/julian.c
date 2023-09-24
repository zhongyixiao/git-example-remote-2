//
// Created by 14806 on 2023/9/23.
//
#include<stdio.h>
int main(void)
{
    int day,year,month,JDN,d,y,m;
    scanf("%d%d%d",&year,&month,&day);
    d=(14-month)/12;
    y=year+4800-d;
    m=month+12*d-3;
    JDN=day+(153*m+2)/5+365*y+y/4-y/100+y/400-32045;
    printf("%d\n",JDN);
    return 0;
}
