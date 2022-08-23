#include<iostream>
using namespace std;

void dtob(int n){
    int bi[32];
    int i=0;

    while(n>0){
        bi[i]=n%2;
        n/=2;
        i++;
    }

    for(int j=0;j<i;j++){           //for(int j=i-1;j>=0;j--){cout<<bi[j]}
        cout<<bi[i-j-1];
        //i will i++ in last loop so -1;
    }
}

int main(){
    int n;
    cout<<"Enter no to convert to binary :"<<endl;
    cin>>n;
    dtob(n);
    return 0;
}