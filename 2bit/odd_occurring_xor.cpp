#include<iostream>
using namespace std;

int oddoccrringxor(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
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
    cout<<"odd occurring no in array is : ";
    cout<<oddoccrringxor(arr , n)<<endl;
    return 0;
}