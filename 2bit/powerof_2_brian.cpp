#include<iostream>
using namespace std;

bool ispower(int n){
    int c=0;
    if(n==0)
        return false;
            
    while(n>0){
        n=(n&(n-1));
        c++;
    }
    if(c==1)
        return true;
    else
        return false;
    
    

}

int main(){

    int n;
    cout<<"enter no to check if it's power of two: \n";
    cin>>n;
    if(ispower(n)){
        cout<<"number is power of 2\n";
    }
    else 
        cout<<"no is not a power of 2\n";
    return 0;
}