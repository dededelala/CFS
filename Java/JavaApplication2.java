
package javaapplication2;
import java.util.Scanner;
public class JavaApplication2 {
    public static void main(String[] args) {
    int l1,l2,i,j;
    int [] a1,a2;
    int [] A;
    Scanner input=new Scanner(System.in);
    l1=input.nextInt();
    a1=new int [l1];
    for(i=0;i<l1;i++){
    a1[i]=input.nextInt();
    }
    l2=input.nextInt();
    a2=new int [l2];
    for(j=0;j<l2;j++){
    a2[j]=input.nextInt();
    }   
    A=merge(a1,a2);
    for(i=0;i<l1+l2;i++){
        System.out.print(A[i]+" ");
    }
    System.out.print("\n");
}
public static int[] merge(int a1[],int a2[]){
    int m = 0,n = 0,t=0;
    int l1=a1.length;
    int l2=a2.length;
    int [] sum;
    int i;
    sum=new int[l1+l2];
    while(m<=l1-1&&n<=l2-1){
        if(a1[m]<=a2[n]){
            sum[t]=a1[m];
            t++;
            m++;
        }
        else{
            sum[t]=a2[n];
            t++;
            n++;
        }
    }
    if(m>l1-1){
        while(n<=l2-1){
            sum[t]=a2[n];
            t++;
            n++;
        }
    }
    else{
        while(m<=l1-1){
            sum[t]=a1[m];
            t++;
            m++;
        }
    }
   return sum;
}
}