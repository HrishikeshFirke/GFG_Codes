#include<iostream>
using namespace std;

int fns(int N){
    if(N==1){               //for logn to base 3: if(N<3)
        return 0;
    }
    return (1+fns(N/2));    //for logn to base 3: (1+fns(N/3))
}

int main(){

    int n;
    cout<<"enter number to find logN base 2: \n";
    cin>>n;
    cout<<fns(n);

    return 0;
}