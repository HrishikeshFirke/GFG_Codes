#include<iostream>
using namespace std;

void printn(int N){

    if(N<1)
        return;
    printn(N-1);
    cout<<N<<" ";

}

int main(){
    
    int n;
    cout<<"enter N to print all no form 1 to N : \n";
    cin>>n;
    printn(n);

    return 0;
}
//T.C. theta(n) ; O.S. O(n);