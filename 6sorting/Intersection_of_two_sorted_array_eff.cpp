#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void inter(int arr1[], int arr2[], int size1, int size2){
    
    int i=0;
    int j=0;
    while (i<size1 && j<size2)
    {
        if(i>0 && arr1[i-1]==arr1[i]){
            i++;
            continue;
        }

        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    
}

int main(){

    int m,n;
    cout<<"Enter no of elements in array 1:"<<endl;
    cin>>m;
    cout<<"Enter no of elements in array 2:"<<endl;
    cin>>n;
    int arr1[m];
    int arr2[n];

    cout<<"Enter elements of array 1 in sorted order \n";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    cout<<"Enter elements of array 2 in sorted order \n";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    cout<<"Your array 1\n";
    disp(arr1,m);
    
    cout<<"Your array 2\n";
    disp(arr2,n);  

    cout<<"Intersecting elements are : \n";
    inter(arr1,arr2,m,n);  
    
    return 0;
}