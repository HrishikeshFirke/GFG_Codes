#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble(int arr[],int size){

    for(int i=0;i<size-1;i++){
        int min_ind=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
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
    cout<<"Sorted array:"<<endl;
    bubble(arr,n);
    disp(arr,n);
    return 0;
}