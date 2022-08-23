#include<iostream>
using namespace std;

int printn(int n, int k=1){

    if(n==1 || n==0)
        return k;
    return printn(n-1, k*n);
    
}

int main(){

    int n;
    cout<<"enter N to find factorial : \n";
    cin>>n;
    cout<<printn(n)<<" ";
    return 0;
}