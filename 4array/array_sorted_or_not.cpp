#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool sort(int arr[],int size){
    
    for(int i=0;i<(size-1);i++){
        if(arr[i]>arr[(i+1)]){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cout<<"Enter no of elements in array to check if array is sorted or not:\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    if(sort(arr,n)){
        cout<<"array is sorted"<<endl;
    }else
        cout<<"array is unsorted"<<endl;

    return 0;
}