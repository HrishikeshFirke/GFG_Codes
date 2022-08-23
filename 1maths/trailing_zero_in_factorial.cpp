#include<iostream>
using namespace std;

int nooftz(int n){
    long long int fact = 1;
    int count =0 ;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    while(fact%10==0){
        count++;
        fact/=10;
    }
    return count;
}

int main(){
    int n;
    cout<<"enter number for trailling zeros in its factorial: ";
    cin>>n;
    cout<<"no of trailling zeros : "<<nooftz(n);

    return 0;
}