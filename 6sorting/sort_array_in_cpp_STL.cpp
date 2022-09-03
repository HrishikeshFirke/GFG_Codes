#include<iostream>
#include<algorithm>     //this header file is used to use sort() in cpp STL
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int n;
    cout<<"Enter no of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter elements \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array\n";
    disp(arr,n);
    
    sort(arr,arr+n);  //sort in SRL takes two parameters add of 1st and add after last element
    cout<<"Sorted array using sort in STL:"<<endl;
    disp(arr,n);

    return 0;
}