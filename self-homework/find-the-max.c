//
// Created by 14806 on 2023/10/3.
//
#include<stdio.h>
int findmax(int arr[],int l,int r)
{
    if(l==r)
        return arr[l];
    else//关键在于始终把最左边的同所有右边的数比较，同时通过递归不断向右推
    {
        int left,right;
        left=arr[l];
        right=findmax(arr,l+1,r);//通过改变边界的方式实现了在不改变数组的情况下改变扫描的范围
        if(left>=right)
            return left;
        else
            return right;
    }
}
int main(void)
{
    int arr[10];
    int l,r;
    int i;
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    scanf("%d%d",&l,&r);
    int max=findmax(arr,l,r);
    printf("%d",max);
    return 0;
}