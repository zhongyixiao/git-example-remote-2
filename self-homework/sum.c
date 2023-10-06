//
// Created by 14806 on 2023/10/4.
//
#include<stdio.h>
int sum(int arr[],int l,int r)
{
    if(l==r)
        return arr[l];
    else
        return arr[l]+sum(arr,l+1,r);
}
int main(void)
{
    int arr[200];
    int i;
    int l,r;
    for(i=0;i<=4;i++)
        scanf("%d",&arr[i]);
    scanf("%d%d",&l,&r);
    int s=sum(arr,l,r);
    printf("%d",s);
    return 0;
}
