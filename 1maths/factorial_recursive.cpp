#include<iostream>
using namespace std;

int fact(int n){

    if(n==0)           //base case for recursion
        return 1;
    return n*fact(n-1);

}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
//A.S.=theta(N)