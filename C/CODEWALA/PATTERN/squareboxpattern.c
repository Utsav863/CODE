#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}