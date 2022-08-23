#include<iostream>
using namespace std;

bool ispower(int n){
    
    return((n!=0) && ( (n&(n-1)) == 0 ));

}

int main(){

    int n;
    cout<<"enter no to check if it's power of 2 : "<<endl;
    cin>>n;
    if(ispower(n)){
        cout<<"number is power of 2\n";
    }
    else 
        cout<<"number is not a power of 2\n";

    return 0;
}