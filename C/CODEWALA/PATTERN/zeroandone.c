#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a;
    for (i=1;i<=n;i++){
        if (i%2!=0) a=1;
        else a=0;
    for(j=1;j<=i;j++){
        printf("%d",a);
        if (a==0) a=1;
        else a=0;
    }printf("\n");
    }
}