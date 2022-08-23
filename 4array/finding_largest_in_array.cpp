#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int lar(int arr[],int size){
    for(int i=0;i<size;i++){
        bool flag=true;
        for(int j=0;j<size;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            return i;
        }
    }
    return -1;
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

    cout<<"largest element is present at index :";
    cout<<lar(arr,n);
    return 0;
}