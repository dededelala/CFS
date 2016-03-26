#include<iostream>
using namespace std;
int main()
{
	int *p=new int[5];
	int i,max,min;
	for(i=0;i<5;i++){
		cin>>*(p+i);
	}
	max=*p;min=*p;
	for(i=0;i<5;i++){
		if(max<=*(p+i)) max=*(p+i);
		if(min>=*(p+i)) min=*(p+i);
	}
	cout<<"max is "<<max<<endl;
	cout<<"min is "<<min<<endl;
	return 0;
}
