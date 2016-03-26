package javaapplication3;
public class JavaApplication3 {
    public static void main(String[] args) {
        int i=1,count=0;
        while(count<100){
            if(HuiwenShu(i)){
                if(SuShu(i)){
                    count=count+1;
                    System.out.print(i+" ");
                    if(count%10==0)System.out.print("\n");
                }
            }
            i=i+1;
        }
    }
    public static boolean HuiwenShu(int num){
    int sum=0;
    int i;
    int record=num;
    while(true){
        i=record%10;
        sum=sum*10+i;
        record=record/10;
        if(record==0)break;
    }
    if(sum==num)return true;
    else return false;
    }
    public static boolean SuShu(int num){
    int i;
    if(num==2||num==3)return true;
    if(num==1) return false;
    for(i=2;i<=(int)Math.sqrt(num)+1;i++){
        
        if(num%i==0) return false;
        if(i>=(int)Math.sqrt(num)+1) return true;
    }
    return false;
    }
}

