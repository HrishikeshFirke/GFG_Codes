#include<iostream>
using namespace std;

int power(int a,int n){
    if(n == 0)
		return 1;

	int temp = power(a, n/2);

	temp = temp * temp;

	if(n % 2 == 0)
		return temp;
	else
		return temp * a; 
}

int main(){

    int a,n;
    cout<<"enter no as a and n in a^n : "<<endl;
    cin>>a>>n;
    cout<<power(a,n);

    return 0;
}