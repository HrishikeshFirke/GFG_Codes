#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int larges(int arr[],int size){
    int temp=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[temp]){
            temp=i;
        }
    }
    return temp;
}

int second(int arr[],int size){
    int lar=larges(arr,size);
    int res=(-1);
    for(int j=0;j<size;j++){
        if(arr[j] != arr[lar]){
            if(res==(-1))
                res=j;
            else if(arr[j]>arr[res]){
                res=j;
            }
        }
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
 
    cout<<"2nd largest element is at index : \n";
    cout<<second(arr,n);

    return 0;
}