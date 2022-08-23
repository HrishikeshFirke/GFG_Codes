#include<iostream>
using namespace std;

int BrianKernighan(int n){
    int res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    return res;
}

int main(){

    int n;
    cout<<"enter no to count bits :\n";
    cin>>n;
    cout<<BrianKernighan(n)<<endl;

    return 0;
}
//T.C. is theta of total set bits