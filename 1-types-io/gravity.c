//
// Created by 14806 on 2023/9/23.
//
#include<stdio.h>
int main()
{
    const double G=6.674e-11;
    const double M=77.15;
    double m,r,n;
    scanf("%lf%lf",&m,&r);
    n=G*M*m/(r*r);
    printf("%.3e",n);
    return 0;
}
