#include<iostream>
using namespace std;

void disp(bool arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mingrpflip(bool arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i] != arr[i-1]){
            if(arr[i] != arr[0]){
                cout<<"From "<<i<<" to ";
            }
            else
                cout<<(i-1)<<endl;
        }
    }
    if(arr[size-1]!= arr[0]){
        cout<<(size-1)<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    bool arr[n];

    cout<<"enter elements in array 0 or 1: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);
    cout<<"grp flips in array to make all elemets same : ";
    mingrpflip(arr,n);
    return 0;
}