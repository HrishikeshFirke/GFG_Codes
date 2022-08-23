#include<iostream>
using namespace std;

int sum(int n,int k=0){
    if(n==0){
        return k;
    }
    return sum(n-1,k+n);
}

int main(){

    int n;
    cout<<"enter n for sum of 1 to n: \n";
    cin>>n;
    cout<<endl<<sum(n);

    return 0;
}