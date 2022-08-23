#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void lrd(int arr[], int size,int rotateby){     //T.C.  theta(nd)  O.C. theta(1)

    for(int i=0;i<rotateby;i++){
        int temp=arr[0];
        for(int j=1;j<size;j++){
            arr[j-1]=arr[j];
        }
        arr[size-1]=temp;
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

    lrd(arr,n,d);
    disp(arr,n);

    return 0;
}
