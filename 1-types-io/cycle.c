//
// Created by 14806 on 2023/9/22.
//
#include<stdio.h>
int main(void)
{
    int radius=10;
    const double PI=3.14159;//const表示常量，不变，且要大写。不用一步步去改，右击->重构->重命名
    double circumference= 2 * PI * radius;
    double area= PI * radius * radius;
    printf("radius = %d\n",radius);//普通字符原样输出，碰到%d输出变量
    printf("circumference = %.2f\narea = %.2f",circumference,area);//.2表示保留小数点后两位，若.0则四舍五入
    return 0;
}
