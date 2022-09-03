#include<iostream>
#include<algorithm>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergearray(int arr1[], int arr2[], int n, int m){      // TC theta(m+n)
    
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){           // = is used so that algo will be stable
            cout<<arr1[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
    cout<<endl;

}

int main(){

    int n,m;
    cout<<"Enter no of elements in array 1:"<<endl;
    cin>>n;
    cout<<"Enter no of elements in array 2:"<<endl;
    cin>>m;
    int arr1[n];
    int arr2[m];

    cout<<"Enter elements of array 1 in sorted order \n";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Your array 1\n";
    disp(arr1,n);

    cout<<"Enter elements of array 2 in sorted order \n";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    cout<<"Your array 2\n";
    disp(arr2,m);    
    mergearray(arr1,arr2,n,m);
    return 0;
}