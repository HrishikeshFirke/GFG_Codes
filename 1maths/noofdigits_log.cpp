#include<iostream>
#include<cmath>
using namespace std;

int noofdigit(int x){
    int c;
    c=log10(x)+1;  //log10 is log base to 10
    return c;
}

int main(){

    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"no of digits : "<<noofdigit(n);
    return 0;
}