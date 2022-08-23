#include<iostream>
#include<cmath>
using namespace std;

void ps(string str){
    
    int n = str.length();
    int p = pow(2,n);
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if((i & (1<<j)) != 0){
                cout<<str[j];
            }
        }cout<<endl;
    }
}

int main(){
    string str;
    cout<<"enter string :\n";
    cin>>str;
    ps(str);
    return 0;
}