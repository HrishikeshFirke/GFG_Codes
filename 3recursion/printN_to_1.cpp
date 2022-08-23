#include<iostream>
using namespace std;

void printn(int N){

    if(N<1)
        return;

    cout<<N<<" ";
    printn(--N);  //if we use (N--) the it will run for infinity
                  //we can also use(N-1)
}

int main(){

    int n;
    cout<<"enter N to print all no form N to 1 : \n";
    cin>>n;
    printn(n);

    return 0;
}