#include<iostream>
using namespace std;

int nooftz(int n){
    int count=0;
    for(int i=5; i<=n;i*=5){
        count+=(n/i);
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
// this method is more effective because this has T.C. of theta(logn) 
// and system don't need to store large values.