#include<iostream>
using namespace std;

int subs(int arr[],int n,int sum){

    if(n==0){
        return (sum==0) ? 1:0;
    }
    return subs(arr,(n-1),sum) + subs(arr,(n-1),(sum-arr[n-1]));
    

}

int main(){

    int n;
    cout<<"enter no of elements in array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in array :\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum;
    cout<<"enter sum to check sum of elemnts in subsets: "<<endl;
    cin>>sum;
    cout<<subs(arr,n,sum)<<endl;

    return 0;
}