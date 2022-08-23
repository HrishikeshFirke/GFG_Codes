#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int second(int arr[],int size){
    int lar=0;
    int sl=(-1);
    for(int i=1;i<size;i++){
        if(arr[i]>arr[lar]){
            sl=lar;
            lar=i;
        }
        if(arr[i]!=arr[lar]){
            if(sl==(-1)||(arr[i]>arr[sl])){
                sl=i;
            }
        }
    }
    return sl;
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