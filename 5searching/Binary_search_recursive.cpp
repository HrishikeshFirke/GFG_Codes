#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binSearch(int arr[], int low, int high, int x){
    
    if(low>high){
        return -1;
    }

    int mid=((low+high)/2);
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return binSearch(arr,low,mid-1,x);
    }
    else{
        return binSearch(arr,mid+1,high,x);
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

    cout<<"Enter element to find in array"<<endl;
    cin>>x;

    cout<<"Element is present at :"<<endl;
    cout<<binSearch(arr,0,(n-1),x);

    return 0;
}