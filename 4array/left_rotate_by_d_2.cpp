#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void rotbyd(int arr[],int size,int d){      //T.C.  theta(n)  O.C. theta(d)
    int temp[d];     
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int j=d;j<size;j++){
        arr[j-d]=arr[j];
    }
    for(int k=0;k<d;k++){
        arr[size-d+k]=temp[k];
    }
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

    rotbyd(arr,n,d);
    disp(arr,n);

    return 0;
}
