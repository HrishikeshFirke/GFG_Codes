#include<iostream>
using namespace std;

int squroot(int x){

    int i=1;
    while(i*i<=x){
        i++;
    }
    return i-1;
}

int main(){
    int n;
    cout<<"Enter number to find its square root:"<<endl;
    cin>>n;

    cout<<"square root of number is: "<<endl;
    cout<<squroot(n);
    return 0;
}