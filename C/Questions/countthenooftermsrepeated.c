#include<stdio.h>
int main()
{
    int arr[10]={0};
    printf("enter the no of array:");
    scanf("%d",&arr);
    int count=0;
    int i,maxcount=0;
    for (i=0;i<arr;i++)
    {
        if(arr[i]==arr[i+1])
            count+=1;
        maxcount=count;
        {
        if (maxcount>count){
            printf("%d",arr[i]);}
        }
    }
}
    