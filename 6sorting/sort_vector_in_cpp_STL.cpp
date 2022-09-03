#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void disp(vector<int> &vec){
    
    for(auto &i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
    
}

int main(){

    vector<int> nums;
    int n,temp;
    cout<<"enter no of elements in vector: "<<endl;
    cin>>n;

    cout<<"enter elements in vectors:"<<endl;

    for(int i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }

    disp(nums);
    sort(nums.begin(),nums.end());
    disp(nums);
    return 0;
}