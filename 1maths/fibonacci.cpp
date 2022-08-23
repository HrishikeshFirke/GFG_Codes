#include<iostream>
using namespace std;

int fib(int nth)
{
    int a=0,b=1,c;
    if(nth==0 || nth==1){
        return nth;
    }
    else{
        for(int i=2;i<=nth;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
    return c;
    }
};
// space compexity and auxilary space is theta(1) 
int main (){

    int n;
    cout<<"enter n for nth term for fib :";
    cin>>n;
    cout<<fib(n);

    return 0;

}