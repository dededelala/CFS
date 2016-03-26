#include<iostream>
#include <cmath>
using namespace std;
const double PI=3.14159;
double areaC(double radius){
	return PI*radius*radius;
} 
double areaR(double a,double b){
	return a*b;
}
double areaTR(double a,double b,double h){
	return 0.5*(a+b)*h;
}
double areaT(double a,double b,double c){
	double p,s;
	p=(a+b+c)/2;
	s=p*(p-a)*(p-b)*(p-c);
	return sqrt(s);
}
int main(){
	cout<<"Choose the kind"<<endl;
	cout<<"1:circle 2:rectangle 3:trapezoid 4:triangle"<<endl;
	int k;
	double a,b,c;
	cin>>k;
	switch(k){
		case 1:cout<<"r=?"<<endl;cin>>a;cout<<"answer is "<<areaC(a)<<endl;;break;
		case 2:cout<<"a=? b=?"<<endl;cin>>a>>b;cout<<"answer is "<<areaR(a,b)<<endl;break;
		case 3:cout<<"a=? b=? h=?"<<endl;cin>>a>>b>>c;cout<<"answer is "<<areaTR(a,b,c)<<endl;break;
		case 4:cout<<"a=? b=? c=?"<<endl;cin>>a>>b>>c;cout<<"answer is "<<areaT(a,b,c)<<endl;break;
	}
	return 0;
}
