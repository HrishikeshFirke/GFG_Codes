#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int kconmax(int arr[],int k,int size){
    int res=INT_MIN;
    for(int i=0;i<(size-k);i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=arr[i+j];
        }
        res=max(res,sum);
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
    cout<<"Maximum sum of k consecutive elements is "<<kconmax(arr,k,n)<<endl;

    return 0;
}