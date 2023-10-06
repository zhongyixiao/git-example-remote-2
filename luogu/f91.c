//
// Created by 14806 on 2023/10/4.
//
#include<stdio.h>
int f91(int n)
{
    if(n>=101)
        return n-10;
    else
        return f91(f91(n+11));
}
int main(void)
{
    int arr[30000];
    int i=0;
    while(1)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
            break;
        i++;
    }
    int j;
    for(j=0;j<=i-1;j++)
        printf("f91(%d) = %d\n",arr[j],f91(arr[j]));
    return 0;
}