#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int left, int mid, int right){
    int size1=mid-left+1;
    int size2=right-mid;
    int l[size1];
    int r[size2];
    for(int i=0;i<size1;i++){
        l[i]=arr[left+i];             //
    }
    for(int j=0;j<size2;j++){
        r[j]=arr[mid+1+j];            //
    }
    int a=0;
    int b=0;
    int k=left;
    while(a<size1 && b<size2){
        if(l[a]<=r[b]){
            arr[k++]=l[a++];
        }
        else{
            arr[k++]=r[b++];
        }
    }
    while(a<size1)
    {
        arr[k++]=l[a++];
    }
    while(b<size2)
    {
        arr[k++]=r[b++];
    }
    
    
}

void mergeSort(int arr[],int left,int right){

    if(left<right){
        int mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

int main(){

    int n;
    cout<<"Enter no of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter elements \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array\n";
    disp(arr,n); 
    mergeSort(arr,0,(n-1));
    cout<<"Sorted array "<<endl;
    disp(arr,n);
    
    return 0;
}