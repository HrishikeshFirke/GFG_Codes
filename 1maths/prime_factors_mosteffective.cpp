#include<iostream>
using namespace std;

void primefact(int n){

    while(n%2==0){
        cout<<"2 ";
        n/=2;
    }
        while(n%3==0){
        cout<<"3 ";
        n/=3;
    }
    for(int i=5;i*i<n;i+=6){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<" ";
            n/=(i+2);
        }
    }
    if(n>3){
        cout<<n<<endl;
    }

}

int main(){
    
    int n;
    cout<<"enter number for it's prime factors: "<<endl;
    cin>>n;
    primefact(n);
    return 0;
}
//t.c. O(n^1/2)