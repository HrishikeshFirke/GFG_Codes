/* enter n as input and create array from 1 to n+1 with missing no and find that no */
#include<iostream>
using namespace std;

int missing(int arr[] , int n){
    int res = 0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    for(int j=1;j<=(n+1);j++){
        res=res^j;
    }
    return res;
}

int main(){

    int n;
    cout<<"enter no of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array from 1 to n+1 with 1 number missing: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"missing no from list is :";
    cout<<missing(arr,n)<<endl;

    return 0;
}