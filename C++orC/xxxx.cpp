#include<stdio.h>
int DPFastestWay(int a[][1001],int t[][1000],int e[],int x[],int n){
	int F,j;
	int f[2][1001];
	f[0][1]=e[0]+a[0][1];
	f[1][1]=e[1]+a[1][1];
	for(j=2;j<=n;j++){
		if(f[0][j-1]+a[0][j]<=f[1][j-1]+t[1][j-1]+a[0][j]){
			f[0][j]=f[0][j-1]+a[0][j];
		}
		else f[0][j]=f[1][j-1]+t[1][j-1]+a[0][j];
		if(f[1][j-1]+a[1][j]<=f[0][j-1]+t[0][j-1]+a[1][j]){
			f[1][j]=f[1][j-1]+a[1][j];
		}
		else f[1][j]=f[0][j-1]+t[0][j-1]+a[1][j];
	}
	if(f[0][n]+x[0]<=f[1][n]+x[1]){
		F=f[0][n]+x[0];
	}
	else F=f[1][n]+x[1];
	return F;
} 
int main(){
	int n,i,j;
	int e[2],x[2];
	int a[2][1001],t[2][1000];
	scanf("%d",&n);
    	scanf("%d %d %d %d",&e[0],&e[1],&x[0],&x[1]);
    for(i=0;i<2;i++){
    	for(j=1;j<=n;j++){
    		scanf("%d",&a[i][j]);
    	}
    }
    for(i=0;i<2;i++){
    	for(j=1;j<=n-1;j++){
    		scanf("%d",&t[i][j]);
    	}
    }
    printf("%d\n",DPFastestWay(a,t,e,x,n));
    return 0;
}
