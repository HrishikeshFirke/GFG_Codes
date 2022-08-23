#include<iostream>
using namespace std;

int lcm(int a,int b){
    int r=max(a,b);
    while(r<=a*b){
        if(r%a==0&&r%b==0){
            return r;
        }
        r++;
    }
    return r;
}

int main(){
    
    int a,b;
    cout<<"enter two no for finding lcm: \n";
    cin>>a>>b;
    cout<<lcm(a,b);

    return 0;
}