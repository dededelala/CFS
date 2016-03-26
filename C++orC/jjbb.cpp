#include<stdio.h>
#include<malloc.h>
void DPKnapsack(int V[][8193],int b[][8193],int W,int w[1001],int v[1001],int n) {
	int i,j;
	for(i=0;i<=w[1]-1;i++){
		V[1][i]=0;
	}
	for(i=w[1];i<=W;i++){
		V[1][i]=v[1];
	}
	for(j=1;j<=n;j++){
		for(i=0;i<=W;i++){
			if(w[j]>i){
				V[j][i]=V[j-1][i];
				b[j][i]=8;
			}
			else if(V[j-1][i]>V[j-1][i-w[j]]+v[j]){
				V[j][i]=V[j-1][i];
				b[j][i]=8; 
			}
			else if(V[j-1][i]<=V[j-1][i-w[j]]+v[j]){
				V[j][i]=V[j-1][i-w[j]]+v[j];
				b[j][i]=7;
			}
		}
	}
}
int PrintKnapsackItem(int b[][8193],int i,int W,int w[1001],int n,int *count){
	if(i==0||W==0) {
	printf("%d\n",*count);
	return 0;
    }
	if(b[i][W]==7){
		*count=*count+1;
		PrintKnapsackItem(b,i-1,W-w[i],w,n,count);
		printf("%d",i);
		
		if(i!=n) printf(" ");
		if(i==n) printf("\n");
	}
	else{
		PrintKnapsackItem(b,i-1,W,w,n,count);
	}
}
int main(){
	int (*V)[8193]= (int (*)[8193])malloc(sizeof(int)*1001*8193);
	int (*b)[8193]= (int (*)[8193])malloc(sizeof(int)*1001*8193);
	int *w=(int *)malloc(1001*sizeof(int));
	int *v=(int *)malloc(1001*sizeof(int));
	int n,W,i,j;
	int k;
	k=0;
	scanf("%d %d",&n,&W);
	for(i=1;i<=n;i++){
		scanf("%d",&w[i]);
	}
	for(j=1;j<=n;j++){
		scanf("%d",&v[j]);
	}
	DPKnapsack(V,b,W,w,v,n);
	PrintKnapsackItem(b,n,W,w,n,&k);
	return 0;
}
