#include<iostream>
#include<vector>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int peakele(int arr[], int size){           //this will return any peak element in array

    int low=0, high=(size-1),mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid==0 || arr[mid]>=arr[mid-1] &&  mid==(size-1) || arr[mid]>=arr[mid+1]){
            return mid;
        }
        else if(mid>0 && arr[mid-1]>=arr[mid]){
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return -1;

}


int main(){
 
    int n;
    cout<<"Enter number of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your array: \n";
    disp(arr,n);

    cout<<peakele(arr,n);
    

    
    return 0;
}