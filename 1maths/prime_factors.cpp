#include<iostream>
using namespace std;

int isprime(int n){
    if(n==2||n==3){
        return true;
    }else if(n%2==0||n%3==0){
        return false;
    }else{
        for(int i=5; i*i<n; i+=6){
            if(n%i==0||n%(i+2)==0){
                return false;
            }
        }
    }
    return true;
}

void primefactor(int n){
    
    for(int i=2;i*i<=n;i++){
        if(isprime(i)){
            while(n%i==0){
                cout<<i<<" ";
                n/=i;
            }
        }
    }
}
int main(){

    int n;
    cout<<"enter number for its prime factors: "<<endl;
    cin>>n;
    cout<<"prime factors of "<<n<<" are"<<endl;
    primefactor(n);
    
    
    return 0;
}
