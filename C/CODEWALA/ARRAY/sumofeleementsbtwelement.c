#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,m,sum=0,p,q,r,s,cnt=1;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements of index of start :");
    scanf("%d %d",&p,&q);
    printf("enter the elements of index of ending:");
    scanf("%d %d",&r,&s);
    for (i=p;i<=r;i++){
        
        if (cnt==1){
            for (j=q;j<m;j++){
            printf("%d",a[i][j]);
            sum+=a[i][j];
        }
        }
        else {
            for (j=0;j<=s;j++){
            printf("%d",a[i][j]);
            sum+=a[i][j];
        }
        }
        cnt++;
    }
    printf("the sum of btw rectangle is :%d",sum);
}