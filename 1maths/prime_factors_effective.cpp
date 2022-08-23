#include<iostream>
#include<cmath>
using namespace std;

void primefact(int n){
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1){
        cout<<n;  //if last prime no only has power 1 then this case
    }
}

int main(){

    int n;
    cout<<"enter number for it's prime factors: "<<endl;
    cin>>n;
    primefact(n);
    return 0;
}