#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    while(n!=0){
        f=f*n;
        n--;
    }
    return f;
}

int main(){

    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}
//T.C.= theta(N) ; A.S.=theta(1)
// iterative sol is better than recursive sol 