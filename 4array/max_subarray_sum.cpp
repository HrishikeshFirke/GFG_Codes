#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int maxsubarrsum(int arr[],int size){
    int ret=arr[0];
    for(int i=0;i<size;i++){
        int temp=0;
        for(int j=i;j<size;j++){
            temp+=arr[j];
            ret=max(ret,temp);
        }
    }
    return ret;
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
    cout<<"Maximum sub array sum: "<<maxsubarrsum(arr,n);
    return 0;
}