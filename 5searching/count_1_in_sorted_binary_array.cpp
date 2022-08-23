#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int oneocc(int arr[],int size){
    
    int low=0;int high=(size-1);
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else{
            if(mid==0 || arr[mid-1]==0){
                return (size-mid);
            }
            else{
                high=mid-1;
            }
        }
    }
    return 0;
}

int main(){

    int n;
    cout<<"Enter number of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter sorted binary elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    cout<<"Total 1's in array  :"<<endl;
    cout<<oneocc(arr,n);

    return 0;
}