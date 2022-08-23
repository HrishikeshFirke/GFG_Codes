#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int firstocc(int arr[],int size, int x){

    int low=0;int high=(size-1);
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>x){
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            if(mid==0 || arr[mid]!=arr[mid-1]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
    
}

int lastocc(int arr[],int x,int size){

    int low=0,high=size-1;
    int mid;
    
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<x){
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            if(mid==(size-1)|| arr[mid]!=arr[mid+1]){
                return mid;
            }
            else
                low=mid+1;
        }
    }
    return -1;
    
}

int totalocc(int arr[],int size,int x){

    int first = firstocc(arr,size,x);
    if(first==(-1)){
        return 0;
    }
    else{
        return (lastocc(arr,x,size)-first + 1);
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

    cout<<"Enter element to find it's occurrences in array"<<endl;
    cin>>x;
    cout<<"Elemnent occured in array: "<<endl;
    cout<<totalocc(arr,n,x);
    return 0;
}