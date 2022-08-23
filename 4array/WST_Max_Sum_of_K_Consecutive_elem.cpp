#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int wst(int arr[],int k,int size){
    int res=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<k;i++){
        curr_sum+=arr[i];
    }
    for(int j=k;j<size;j++){
        curr_sum+=(arr[j]-arr[j-k]);
        res=max(res,curr_sum);
    }
    return res;
}

int main(){

    int n,k;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";

    disp(arr,n);
    cout<<"Enter k :"<<endl;
    cin>>k;
    cout<<"Maximum sum of k consecutive elements is "<<wst(arr,k,n)<<endl;

    return 0;
}