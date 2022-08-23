#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int prof(int arr[],int size){
    int profit=0;
    for(int i=1;i<size;i++){
        if(arr[i-1]<arr[i]){
            profit+=(arr[i]-arr[i-1]);
        }
    }
    return profit;
}

int main(){

    int n;
    cout<<"Enter no of prices in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter prices in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array of stock price: \n";
    disp(arr,n);
    cout<<"Maximum profit  :";
    cout<<prof(arr,n);

    return 0;
}