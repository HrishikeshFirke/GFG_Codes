#include<iostream>
using namespace std;

void divisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
}

int main(){

    int n;
    cout<<"enter no for it's divisors :"<<endl;
    cin>>n;
    divisors(n);

    return 0;
}