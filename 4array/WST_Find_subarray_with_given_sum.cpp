#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int wsttwosum(int arr[],int sum,int size){

    int start=0;
    int curr_sum=arr[0];
    for(int end=1;end<=size;end++){
        while(curr_sum>sum && start<(end-1)){
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum){
            cout<<"Found sum in array from index "<<start<<" to "<<(end-1)<<endl;
            return 1;
        }
        if(end<size){
            curr_sum+=arr[end];
        }
    }
    cout<<"Sum now found"<<endl;
    return 0;
}

int main(){

    int n,sum;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter non-negative elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";

    disp(arr,n);
    cout<<"Enter sum to check if sum of subset is present "<<endl;
    cin>>sum;
    wsttwosum(arr,sum,n);
    return 0;
}