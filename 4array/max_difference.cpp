#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int maxdiff(int arr[], int size){       //O(n*n)

    int c=arr[1]-arr[0];
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            c = max(c,arr[j]-arr[i]);
        }
    }
    return c;
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

    cout<<"max diff is : ";
    cout<<maxdiff(arr,n)<<endl;



    return 0;
}