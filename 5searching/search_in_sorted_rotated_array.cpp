#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int rotated(int arr[],int x,int size){          //even if array is rotated, half of array is sorted
    int low=0,high=size,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[low]<arr[mid]){            //left array is sorted
            if(arr[low]<=x && arr[mid]>x){
                high=mid-1;
            }
            else
                low=mid+1;                
        }
        else{                                  //right array is sorted
            if(arr[mid]<x && arr[high]>=x){
                low=mid+1;
            }
            else
                high=mid-1;
        }
    }
    return -1;
}

int main(){

    int n,x;
    cout<<"Enter number of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter sorted elements in array(array can be in rotated form ): "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    cout<<"Enter element to find in array"<<endl;
    cin>>x;

    cout<<"Element is present at :"<<endl;
    cout<<rotated(arr,x,n);

    return 0;
}
