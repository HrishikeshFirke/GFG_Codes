#include<iostream>
using namespace std;

bool isprime(int n){
    if(n==1)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){

    int n;
    cout<<"enter number to check if it's prime: "<<endl;
    cin>>n;
    (isprime(n) ? cout<<"prime" : cout<<"not prime");

    return 0;
}