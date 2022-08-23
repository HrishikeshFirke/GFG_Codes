#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void toadd(int arr[], int size, int cap, int pos, int ele){
    if(cap<=0){
        return;
    }
    int idx=pos-1;
    for(int j=(size-1);j>=idx;j--){
        arr[j+1]=arr[j];
    }
    arr[idx]=ele;

}
int main(){

    int n,m;
    int cap;

    cout<<"enter no of elements to create array: \n";
    cin>>n;
    cout<<"enter no of elements you want to enter in array :\n";
    cin>>m;
    cap=n-m;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    cout<<"your array: "<<endl;
    disp(arr,m);
    cout<<endl;
    
    cout<<"capacity of array to add elements in array: "<<cap<<endl;
    
    for(int i=cap;i>0;i--){
        int ind,ment;
        cout<<"enter position at which you want to enter element: "<<endl;
        cin>>ind;
        cout<<"enter element to add :"<<endl;
        cin>>ment;
        toadd(arr,n,i,ind,ment);

    }
    disp(arr,n);
    return 0;
}