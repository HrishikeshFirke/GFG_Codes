#include<iostream>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int mcss(int arr[],int size){
    int res=arr[0];
    for(int i=0;i<size;i++){                
        
        int curr_sum=arr[i];
        int curr_max=arr[i];
    
        for(int j=1;j<size;j++){
            int index=(i+j)%size;
            curr_sum+=arr[index];
            curr_max=max(curr_max,curr_sum);
        }
        res=max(res,curr_max);
        
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
    cout<<"Maximum circular sub array sum: "<<mcss(arr,n);
    return 0;
}