#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void freqq(int arr[],int size){
    int i=1;
    int freq=1;
    while(i<size){
        while(i<size && arr[i-1]==arr[i]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(size == 1 || (arr[size-2] != arr[size-1])){
        cout<<arr[size-1]<<" 1"<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array (sorted array): "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    freqq(arr,n);
    return 0;
}