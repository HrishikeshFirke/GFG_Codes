#include<iostream>
using namespace std;

int elemf(int arr[],int n,int f){
    
    for(int i=0;i<n;i++){
        if(arr[i]==f)
            return i;
    }
    return -1;
}

int main(){

    int n,find;
    cout<<"Enter no of elements in array: \n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter element to search in array:"<<endl;
    cin>>find;
    cout<<elemf(arr,n,find)<<endl;

    return 0;
}