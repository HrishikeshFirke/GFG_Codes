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
    int lmax[size],rmax[size];
    lmax[0]=arr[0];
    for(int i=1;i<size;i++){
        lmax[i]=max(lmax[i-1],arr[i]);
    }
    rmax[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);
    }

    for(int j=0;j<size;j++){
        res+=(min(rmax[j],lmax[j])-arr[j]);
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