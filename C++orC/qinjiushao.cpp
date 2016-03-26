#include<stdio.h>
int main()
{
	int i,n;
	float a,b,sum,x;
	scanf("%d %f",&n,&x);
	printf("input b0\n");
	scanf("%f",&b);
	for(i=1;i<n;i++){
		printf("input a\n");
		scanf("%f",&a);
		b=b*x+a;
	}
	printf("answer is %f\n",b);
	return 0;
} 
