#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void nbonacci(int arr[],int n,int size){

    for(int i=0;i<(n-1);i++){            //for 0's in series
        arr[i]=0;
    }
    arr[n-1]=1;                          //for 1st 1
    
    int curr_sum=1;

    for(int j=n;j<size;j++){
        arr[j]=curr_sum;
        curr_sum+=(arr[j]-arr[j-n]);
    }
}

int main(){

    int n,num;
    cout<<"Enter N for nbonacci: "<<endl;
    cin>>n;
    cout<<"Enter number of elements in series: "<<endl;
    cin>>num;
    int arr[num];
    nbonacci(arr,n,num);
    cout<<"Series"<<endl;
    disp(arr,num);
    return 0;
}