#include<iostream>
using namespace std;

int hcf(int a,int b){

    int x;
    x=min(a,b);
    while(x!=0){
        if(a%x == 0 && b%x == 0){
            break;            
        }
        x--;
    }
    return x;
}

int main(){

    int a,b;
    cout<<"enter two no for finding their hcf: ";
    cin>>a>>b;
    cout<<endl<<"hcf of no is "<<hcf(a,b)<<endl;

    return 0;
}