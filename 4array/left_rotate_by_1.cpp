#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void leftro(int arr[],int size){

    int temp = arr[0];
    for(int i=1;i<(size);i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
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

    leftro(arr,n);  //left rotate dirn: <-
    disp(arr,n);
    return 0;
}