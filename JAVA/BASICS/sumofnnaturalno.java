import java.util.*;
class sumofn{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int sum=0;
for (int i=0;i<=n;i++){
    // System.out.println(i+" ");
    sum+=i;
}
System.out.println(sum);
}
}