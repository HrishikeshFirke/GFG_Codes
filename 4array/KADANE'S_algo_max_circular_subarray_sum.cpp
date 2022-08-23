#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int kadane(int arr[],int size){
    int res=arr[0];
    int maxend=arr[0];
    for(int i=1;i<size;i++){
        maxend=max(maxend+arr[i],arr[i]);
        res=max(res,maxend);
    }
    return res;
}

int kadane_circular(int arr[],int size){
    int res2=arr[0];
    int minend=arr[0];
    int array_sum=arr[0];
    for(int j=1;j<size;j++){                //to find min_sum array
        array_sum+=arr[j];
        minend=min(minend+arr[j],arr[j]);
        res2=min(res2,minend);
    }
    return (array_sum-res2);                
}

int maxcirsum(int arr[],int size){
    int normal_max=kadane(arr,size);
    if(normal_max<0){                       //if all elemets are -ve in array
        return normal_max;
    }
    int circular_max=kadane_circular(arr,size);
    return max(normal_max,circular_max);
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
    cout<<"Maximum circular sub array sum: "<<maxcirsum(arr,n)<<endl;

    return 0;
}