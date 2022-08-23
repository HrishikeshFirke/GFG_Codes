#include<iostream>
using namespace std;

int hcf(int a, int b){         //log(min(a,b))
    if(b==0){
        return a;       
    }else{
        return hcf(b,a%b);
    }
}

int lcm(int a, int b){
    return ((a*b)/hcf(a,b));
}

int main(){
    int a,b;
    cout<<"enter two no for finding lcm: \n";
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}
