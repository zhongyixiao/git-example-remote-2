//
// Created by 14806 on 2023/9/26.
//
#include<stdio.h>
#include <math.h>
int main(void)
{
    int percentiles,decimony,bit,a;
    int i;
    for(i=100;i<1000;i++)
    {
        percentiles=i/100;
        a=i%100;
        decimony=a/10;
        bit=a%10;
        if(i==pow(percentiles,3)+pow(decimony,3)+ pow(bit,3))
            printf("%d\n",i);
    }
    return 0;
}