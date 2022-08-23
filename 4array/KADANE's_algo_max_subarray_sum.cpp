#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int kadane(int arr[],int size){
    int maxend=arr[0];
    int res=arr[0];

    for(int i=1;i<size;i++){
        maxend=max(maxend+arr[i],arr[i]);
        res=max(maxend,res);
    }
    return res;
    
}

int main(){

    int n;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);
    cout<<"Maximum sub array sum: "<<kadane(arr,n);
    return 0;
}