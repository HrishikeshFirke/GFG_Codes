#include<iostream>
using namespace std;

int sumofd(int n){
    if(n<=0){
        return 0;
    }
    return n%10+sumofd(n/10);
}

int main(){

    int n;
    cout<<"enter number to find sum of digits:\n";
    cin>>n;
    cout<<sumofd(n);
    return 0;
}
//T.C. theta(d)   O.S. theta(d)  d=no of digits