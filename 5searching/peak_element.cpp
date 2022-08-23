#include<iostream>
#include<vector>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print_vect(vector<int>& v){
    for(const auto &i:v){
        cout<<i<<" ";
    }
}

vector<int> peakele(int arr[], int size){           //this will make vector of peak elements
    vector<int> ret;
    if(size==1){
        ret.push_back(arr[0]);
    }
    if(arr[0]>=arr[1]){
        ret.push_back(arr[0]);
    }
    if(arr[size-1]>=arr[size-2]){
        ret.push_back(arr[size-1]);
    }
    for(int i=1;i<(size-1);i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            ret.push_back(arr[i]);
        }
    }

    return ret;

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
    vector<int> ans;
    ans=peakele(arr,n);
    print_vect(ans);
    cout<<endl;

    
    return 0;
}