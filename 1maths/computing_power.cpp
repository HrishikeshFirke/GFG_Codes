#include<iostream>
using namespace std;

int power(int n,int m){
    int x=1;
    for(int i=0;i<m;i++){
        x=x*n;
    }
    return x;
}

int main(){

    int a,b;
    cout<<"enter two numbers as a^b: "<<endl;
    cin>>a>>b;
    cout<<power(a,b);

    return 0;
}