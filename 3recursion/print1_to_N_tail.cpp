#include<iostream>
using namespace std;

void printn(int n, int k=1){
    if(n==0)
        return;
    cout<<k<<" ";    
    printn(n-1,k+1);
}

int main(){

    int n;
    cout<<"enter N to print all no form 1 to N : \n";
    cin>>n;
    printn(n);
    return 0;
}