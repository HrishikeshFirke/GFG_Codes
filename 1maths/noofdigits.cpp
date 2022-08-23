#include<iostream>
using namespace std;

int noofdigit(int x){
    int count=0;
    while(x!=0){
        x=x/10;
        count++;
    }
    return count;
}

int main(){

    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"no of digits : "<<noofdigit(n);
    return 0;
}