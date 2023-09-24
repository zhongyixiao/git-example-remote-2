//
// Created by 14806 on 2023/9/22.
//
#include<stdio.h>
int main(void)
{
    const double MOL=6.02E23;//E表示十的-23次方
    const int GRAM_PER_MOL=32;
    int mass=6;
    double quantity=mass*1.0/GRAM_PER_MOL*MOL;
    printf("quantity = %.3e\nquantity = %.5g\n",quantity,quantity);//e表示科学计数法,g表示有效数字
    return 0;
}
