//
// Created by 14806 on 2023/9/23.
//
#include<stdio.h>
#include <math.h>

int main(void)
{
    int p,q;
    double x1;
    scanf("%d%d",&p,&q);
    if(pow(q*1.0/2.0f,2)+pow(p*1.0/3.0f,3)<0)
        return 0;
    else
    {
        x1=cbrt(-q*1.0/2.0f+sqrt(pow(q*1.0/2.0f,2)+pow(p*1.0/3.0f,3)))
                +cbrt(-q*1.0/2.0f-sqrt(pow(q*1.0/2.0f,2)+pow(p*1.0/3.0f,3)));
        printf("%.3f",x1);
        return 0;
    }
}
