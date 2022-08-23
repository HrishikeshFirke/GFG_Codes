#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rev(int arr[],int l,int h){   //T.C.  theta(n)  O.C. theta(1)
    
    while(l<h){
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
}

void rot(int arr[],int size,int d){
    
    rev(arr,0,d-1);
    rev(arr,d,size-1);
    rev(arr,0,size-1);
}

int main(){

    int n,d;
    cout<<"Enter no of elements in array :\n";
    cin>>n;
    int arr[n];

    cout<<"enter elements in array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    cout<<"Enter d for rotate array to left:";
    cin>>d;

    rot(arr,n,d);
    disp(arr,n);

    return 0;
}
