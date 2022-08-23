#include<iostream>
using namespace std;

int hcf(int x, int y){
    if(y==0)
        return x;
    else
        return hcf(y,x%y);
}

int main(){

    int a,b;
    cout<<"enter two no for finding their hcf: "<<endl;
    cin>>a>>b;
    cout<<endl<<"hcf of no is "<<hcf(a,b)<<endl;
    return 0;

}