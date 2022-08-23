#include<iostream>
using namespace std;

void twooc(int arr[] ,int n){
    int x=0;
    int res1=0,res2=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    int rightmostbit=(x & (~(x-1)));  //for getting rightmost set bit 
    for(int j=0;j<n;j++){
        if((rightmostbit & arr[j]) != 0){        //if rightmost set bit is set int element
            res1 = res1^arr[j];
        }
        /* XOR of first set is finally going to hold one odd 
        occurring number x */
        else
            res2 = res2^arr[j];                  //if rightmost set bit is not set int element
    }
    cout<<res1<<" "<<res2<<endl;
    
}

int main(){
    int n;
    cout<<"enter no of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array such that two numbers are odd occuring: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"two odd occuring numbers are :\n";
    twooc(arr ,n);
    return 0;
}