#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion(int arr[],int size){

    int key;
    for(int i=1;i<size;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){

    int n;
    cout<<"Enter no of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter elements \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array\n";
    disp(arr,n);
    cout<<"Sorted array:"<<endl;
    insertion(arr,n);
    disp(arr,n);
    return 0;
}