#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[]="hello";
    int len =0;
    char temp;
    while (a[len]!='\0'){
        len++;}
    printf("the length of the string is %d\n:",len);
    for (int i = 0; i < ((len-1)/2); i++)
    {
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
    printf("the reverse of string is %s\n",a);
    

    return 0;
}