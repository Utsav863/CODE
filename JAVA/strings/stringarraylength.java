package strings;

import java.util.*;
class stringarraylength{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
String [] a=new String[n];
int total=0;
for (int i=0;i<n;i++){
    a[i]=sc.next();
}
for (int i=0;i<n;i++){
    for (int j=0;j<a.length;j++){
        total+=a[i].length();
    }
}
System.out.println(total);
}
}