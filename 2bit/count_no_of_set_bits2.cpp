#include<iostream>
using namespace std;

int noofbits(int n){
    int res=0;
    while(n>0){
        if(n&1 == 1){
            res++;
        }
        n = n>>1;
    }return res;
}

int main(){

    int n;
    cout<<"enter no to count bits :\n";
    cin>>n;
    cout<<noofbits(n)<<endl;
    return 0;
}
//T.C. is theta of total bits