//
// Created by 14806 on 2023/10/3.
//
#include<stdio.h>
//int fac(int N)
//{
//    int SUM=1;
//    if(N>=1)
//       SUM=N*fac(N-1);
//    else
//        return 1;
//    return SUM;
//}
int fac(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fac(n-1);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int sum=fac(n);
    printf("%d",sum);
    return 0;
}