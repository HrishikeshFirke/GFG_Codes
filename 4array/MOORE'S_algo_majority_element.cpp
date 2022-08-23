#include<iostream>
using namespace std;

void disp(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int moore(int arr[],int size){
    int res=0;
    int count=1;
    for(int i=1;i<size;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int j=0;j<size;j++){
        if(arr[res]==arr[j]){
            count++;
        }
    }
    if(count<=(size/2)){
        res = -1;
    }
    return res;
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
    cout<<endl<<"majority element is at index: ";
    cout<<moore(arr,n);


    return 0;
}
