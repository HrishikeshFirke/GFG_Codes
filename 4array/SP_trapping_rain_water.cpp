#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int trapp(int arr[], int size){
    int res=0;
    for(int i=1;i<size-1;i++){
        int lmax=arr[i];
        for(int j=i;j>=0;j--)
            lmax=max(lmax,arr[j]);            
        
        int rmax=arr[i];
        for(int j=i;j<size;j++){
            rmax=max(rmax,arr[j]);
        }
        res+=(min(rmax,lmax)-arr[i]);
    }
    return res;
}

int main(){

    int n;
    cout<<"Enter no of towers in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter heights of tower in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your towers: \n";
    disp(arr,n);
    cout<<"We can store "<<trapp(arr,n)<<" units of water \n";
    
    return 0;
}