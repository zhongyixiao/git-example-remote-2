//
// Created by 14806 on 2023/10/4.
//
#include<stdio.h>
int i;
int rev(int arr[],int l,int r)
{
    if(l<=r)
    {
        int j;
        for(j=l;j<r;j++)
        {
            int mid=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=mid;
        }
        rev(arr,l,r-1);
    }
}
int main(void)
{
    int arr[200];
    i=0;
    while(1)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
            break;
        i++;
    }
   rev(arr,0,i-1);
    int j;
    for(j=0;j<i;j++)
        printf("%d ",arr[j]);
    return 0;
}