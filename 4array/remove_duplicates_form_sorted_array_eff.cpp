#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int remdup(int arr[],int size){
    int res=1;
    for(int i=1;i<size;i++){
        if(arr[res-1] != arr[i]){
            arr[res]=arr[i];
            res++;
        }
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

    int no = remdup(arr,n);
    cout<<"array after removing duplicate elements:\n";
    disp(arr,no);
    return 0;
}