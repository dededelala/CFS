#include<stdio.h>
int DPMatrixChina(int p[],int n){
	int i,j,c;
	int q,k;
	int m[201][201];
	for(i=1;i<=n;i++){
		m[i][i]=0;
	}
	for(c=2;c<=n;c++){
		for(i=1;i<=n-c+1;i++){
			j=i+c-1;
			m[i][j]=99999999;
			for(k=i;k<j;k++){
				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j]) m[i][j]=q;
			}
		}
	}
	return m[1][n];
} 
int main(){
	int p[201];
	int n,i;

	for(i=0;i<=n;i++){
		scanf("%d",&p[i]);
	}
	printf("%d\n",DPMatrixChina(p,n));
	return 0;
}
