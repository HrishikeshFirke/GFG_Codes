#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int firstocc(int arr[],int size, int low, int high, int x){

    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;
    if(arr[mid]==x){
        if(arr[mid-1]!=x || mid==0){
            return mid;
        }
        else 
            return firstocc(arr,size,low,(mid-1),x);
    }
    else if(arr[mid]>x){
        return(arr,size,low,(mid-1),x);
    }
    else
        return(arr,size,mid+1,high,x);
    
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

    cout<<"Enter element to find it's first occurrence in array"<<endl;
    cin>>x;

    cout<<"Element's first occurance is present at :"<<endl;
    cout<<firstocc(arr,n,0,(n-1),x);
    

    return 0;
}