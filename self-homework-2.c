//
// Created by 14806 on 2023/9/17.
//
//二分查找法
#include<stdio.h>
int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9};//arr[0]代表下标为零的数字
    int sz=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=sz-1;
    int mid=0;
    int k=7;//所需要查找的数字
    while(left<=right)
    {
        mid=(right+left)/2;
        if(arr[mid]==k)
        {
            printf("the target number is in %d",mid);
            break;
        }
        else if(arr[mid]>>k)
            right=mid-1;
        else
            left=mid+1;
    }
    if(left>>right)
        printf("can`t find the target word");
    return 0;
}