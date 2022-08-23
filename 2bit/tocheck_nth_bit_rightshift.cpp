#include<iostream>
using namespace std;
void nthbit(int a, int n){
    if((a>>(n))%2 == 1){       //(((a>>(n-1))%2 & 1) ==1) can also be used
        cout<<"bit is set at n'th bit\n";
    }
    else
        cout<<"bit is not set at n'th bit\n";
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