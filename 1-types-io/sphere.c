//
// Created by 14806 on 2023/9/22.
//
#include<stdio.h>
int main(void)
{
    int radius=100;
    const double PI=3.14159;
    double surface_area=4 * PI * radius * radius;
    double volumn=4.0f/3.0f*PI*radius*radius*radius;//相除一定要浮点型
    printf("%-15.4f : surface_area\n%-15.4f : volumn\n",surface_area,volumn);//.4是控制精度，15是控制最小宽度，正常是空格加在前面，若为-15，则空格填在后面
    return 0;
}