#include<iostream>
using namespace std;

void ooo(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                c++;
            }
        }
        if(c%2 != 0){
            cout<<endl<<"odd occurring element in array : "<<arr[i]<<" ";
        }
    }
}

int main(){

    int n;
    cout<<"enter no of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    ooo(arr,n);
}