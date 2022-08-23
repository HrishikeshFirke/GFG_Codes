#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int equilib(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int l_sum=0;
    for(int j=0;j<size;j++){
        if(l_sum==sum-arr[j]){
            cout<<"Equilibrium point exist"<<endl;
            return 1;
        }
        l_sum+=arr[j];
        sum-=arr[j];
    }
    cout<<"Equilibrium point does not exist"<<endl;
    return 0;
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

    equilib(arr,n);

    return 0;
}