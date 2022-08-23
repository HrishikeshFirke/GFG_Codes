#include<iostream>
using namespace std;

int fib(int nth){
    if(nth==0 || nth==1){
        return nth;
    }
    return fib(nth-1)+fib(nth-2);

}
// space compexity and auxilary space is theta(n) 
int main(){

    int n;
    cout<<"enter n for nterm in fib: ";
    cin>>n;
    cout<<fib(n);

    return 0;
}