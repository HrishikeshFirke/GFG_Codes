#include<iostream>
using namespace std;
void nthbit(int a, int n){

    if((a&(1<<n)))      //we can't use == 1 because value will be in power of 2 always;
        cout<<"yes bit is set\n";
    else
        cout<<"no bit is not set\n";
    
}

int main(){

    int a,n;
    cout<<"enter number :"<<endl;
    cin>>a;
    cout<<"enter n'th bit you want to check int number: \n";
    cin>>n;
    nthbit(a, n);
    return 0;
}