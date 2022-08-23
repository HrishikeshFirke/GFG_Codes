#include<iostream>
using namespace std;

int jos(int n,int k){

    if(n==1){
        return 0;
    }
    return ((jos((n-1),k)+k)%n);
}

int main(){

    int n,k;
    //indexing of people begin with 1
    cout<<"Enter total people in circle :"<<endl;
    cin>>n;
    cout<<"Enter interval to kill: "<<endl;
    cin>>k;
    cout<<"Alive person's no : "<<(jos(n,k)+1)<<endl;
    return 0;
}