#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void effread(int arr[],int size){       //Theta O(n)
    int curr_leader = arr[size-1];
    cout<<curr_leader<<" ";
    for(int i=size-2;i>=0;i--){
        if(arr[i]>curr_leader){
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
    
}

int main(){

    int n,d;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    effread(arr,n);

    return 0;
}