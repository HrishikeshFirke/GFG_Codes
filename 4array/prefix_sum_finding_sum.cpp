#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int getsum(int arra[],int start,int end){
    if(start!=0){
        return (arra[end]-arra[start-1]);
    }
    else 
        return arra[end];

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

    int prefix_sum[n];
    cout<<"Prefix sum array "<<endl;
    prefix_sum[0]=arr[0];
    for(int j=1;j<n;j++){
        prefix_sum[j] = prefix_sum[j-1] + arr[j]; 
    }
    disp(prefix_sum,n);

    int a,b;
    cout<<"Enter two index to find sum between them:"<<endl;
    cin>>a>>b;
    cout<<getsum(prefix_sum,a,b);
    
    return 0;
}