#include<iostream>
using namespace std;

int noofbits(int n){
    int c=0;
    while(n>0){
        if(n%2 != 0){
            c++;            
        }
        n=n/2;
    }
    return c;
}

int main(){

    int n;
    cout<<"enter no to count bits :\n";
    cin>>n;
    cout<<noofbits(n)<<endl;

    return 0;
}
//T.C. is theta of total bits