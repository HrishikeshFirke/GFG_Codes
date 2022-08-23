#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int lastocc(int arr[],int low,int high, int x,int size){

    if(low>high){
        return -1;
    }


    int mid=(low+high)/2;
    if(arr[mid]>x){
        return lastocc(arr,low,mid-1,x,size);
    }
    else if(arr[mid]<x){
        return lastocc(arr,mid+1,high,x,size);
    }
    else{
        if(mid==(size-1) || arr[mid] != arr[mid+1] ){
            return mid;
        }
        else
            return lastocc(arr,mid+1,high,x,size);
    }
}

int main(){

    int n,x;
    cout<<"Enter number of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter sorted elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    cout<<"Enter element to find it's last occurrence in array"<<endl;
    cin>>x;

    cout<<"Element's last occurance is present at :"<<endl;
    cout<<lastocc(arr,0,(n-1),x,n);

    return 0;
}