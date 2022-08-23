#include<iostream>
using namespace std;

int maxnoofpieces(int n,int a,int b,int c){
    
    if(n <= -1)
        return -1;
    if(n == 0)
        return 0;

    int res = max(maxnoofpieces((n-a),a,b,c),max(maxnoofpieces((n-b),a,b,c),maxnoofpieces((n-c),a,b,c)));
    if(res==-1){
        return -1;
    }
    return (res+1);

}

int main(){

    int n;
    int a,b,c;
    cout<<"Enter rope length: ";
    cin>>n;
    cout<<"Enter cut length 1: ";
    cin>>a;
    cout<<"Enter cut length 2: ";
    cin>>b;
    cout<<"Enter cut length 3: ";
    cin>>c;
    cout<<endl<<maxnoofpieces(n,a,b,c)<<endl;
    
    return 0;
}