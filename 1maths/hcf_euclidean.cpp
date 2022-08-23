#include<iostream>
using namespace std;

int hcf(int x,int y){

    while(x!=y){
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    return x;

}

int main(){

    int a,b;
    cout<<"enter two no for finding their hcf: "<<endl;
    cin>>a>>b;
    cout<<endl<<"hcf of no is "<<hcf(a,b)<<endl;
    return 0;
}