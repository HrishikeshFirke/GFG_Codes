#include<iostream>
using namespace std;

bool ispower(int n){
    if(n==0)
        return false;
    while(n>1){
        if(n%2 != 0){
            return false;            
        }
        n=n/2;
    }return true;

}

int main(){

    int n;
    cout<<"enter no to check if it's power of 2 : "<<endl;
    cin>>n;
    if(ispower(n)){
        cout<<"number is power of 2\n";
    }
    else 
        cout<<"no is not a power of 2\n";

    return 0;
}