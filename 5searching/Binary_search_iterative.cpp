#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int bise(int arr[], int x,int size){
    int start=0,end=(size-1);
    while(start<=end){
        int mid=((start+end)/2);
        if(x==arr[mid]){
            return mid;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;

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
    cout<<bise(arr,x,n);

    return 0;
}