#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

bool isPair(int arr[],int temp_sum,int left,int right){

    while(left<right){
        if(arr[left]+arr[right]==temp_sum){
            return 1;
        }
        else if((arr[left]+arr[right])>temp_sum){
            right--;
        }
        else
            left++;
    }
    return 0;

}

bool tripletsum(int arr[],int sum,int size){

    for(int i=0;i<size-3;i++){
        if(arr,(sum-arr[i]),i+1,size-1){
            return 1;
        }
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
    int ans=tripletsum(arr,x,n);
    if(ans){
        cout<<"Sum is present in array \n";
    }
    else
        cout<<"Sum is not present in array \n";

    return 0;
}