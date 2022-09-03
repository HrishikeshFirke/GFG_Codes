#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selection(int arr[],int size){

    int temp[size];
    for(int i=0;i<size;i++){
        int min_ele=0;
        for(int j=1;j<size;j++){
            if(arr[min_ele]>arr[j]){
                min_ele=j;
            }            
        }
        temp[i]=arr[min_ele];
        arr[min_ele]=INT_MAX;
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
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
    selection(arr,n);
    disp(arr,n);

    return 0;
}