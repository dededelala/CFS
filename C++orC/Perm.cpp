#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 
void Perm(int P[],int m,int n){
	int i,j,key,k;
	if(m==n) {
		for(k=1;k<=n;k++){
			printf("%d",P[i]);
			if(k!=n) printf(" ");
		}
		printf("\n");
	}
	else{
		for(j=m;j<=n;j++){
			key=P[m];
			swap(&P[m],&P[j]);
			i=n;
			while(i>0&&P[i]>key){
				P[i+1]=P[i];
				i=i-1;
			}
		P[i+1]=key;
		Perm(P,m+1,n);
		swap(&P[j],&P[m]);
		}
	}
}
int main(){
	int i,n;
	int P[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		P[i]=i;
	}
	Perm(P,1,n);
	return 0;
}
