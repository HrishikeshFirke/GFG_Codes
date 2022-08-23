#include<iostream>
using namespace std;

int del(int arr[],int size, int e){
    
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==e)
            break;
        
    }
    if(i==size){
        cout<<"no element found\n";
        return size;
    }
    for(int j=i; j<(size-1); j++){
        arr[j]=arr[j+1];
    }
    return (size-1);
}

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n,ele;
    cout<<"enter no of elements in array:\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array:"<<endl;
    disp(arr,n);

    cout<<"Enter element to delete in array:"<<endl;
    cin>>ele;

    del(arr,n,ele);
    disp(arr,(n-1));

    return 0;
}