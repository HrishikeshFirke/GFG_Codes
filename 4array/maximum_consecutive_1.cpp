#include<iostream>
using namespace std;

void disp(bool arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int maxone(bool arr[],int size){
    int res=0;
    int m=0;
    for(int i=0;i<size;i++){
        if(arr[i]){
            res++;
            m=max(m,res);
        }
        else{
            res=0;
        }
    }
    return m;
}

int main(){

    int n;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    bool arr[n];

    cout<<"enter elements in array 0 or 1: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);
    cout<<"maximum maximum consecutive 1 in array : "<<maxone(arr,n)<<"\n";
    return 0;
}