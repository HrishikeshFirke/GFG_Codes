#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void readers(int arr[],int size){       //T.C. O(n*n)
    for(int i=0;i<size;i++){
        bool flag=true;
        for(int j=i+1;j<size;j++){
            if(arr[j]>=arr[i]){
                flag=false;
            }
        }
        if(flag==true){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){

    int n,d;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);
    
    cout<<"Readers in array:\n";
    readers(arr,n);

    return 0;
}