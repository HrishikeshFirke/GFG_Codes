#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool twopointer(int arr[],int sum, int size){
    int left=0;
    int right=(size-1);

    while(left<right){
        if(arr[left] + arr[right] == sum){
            return 1;
        }
        else if((arr[left] + arr[right])>sum){
            right--;
        }
        else
            left++;
    }
    return 0;
}

int main(){

    int n,x;
    cout<<"Enter number of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter sorted elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    cout<<"Enter sum of pair elements in array"<<endl;
    cin>>x;
    int ans=twopointer(arr,x,n);
    if(ans){
        cout<<"Sum is present in array \n";
    }
    else
        cout<<"Sum is not present in array \n";

    return 0;
}