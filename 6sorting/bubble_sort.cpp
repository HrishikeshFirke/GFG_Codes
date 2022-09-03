#include<iostream>
#include<vector>
using namespace std;

void disp(vector<int>& vec){
    for(auto &i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

void bubble(vector<int>& bub){
    bool swapped = false;
    for(int i=0;i<(bub.size()-1);i++){
        for(int j=0;j<(bub.size()-1-i);j++){    //bub.size()-i-1 : -i because last i elements are sorted
            if(bub.at(j)>bub.at(j+1)){
                 swap(bub.at(j),bub.at(j+1));
                 swapped = true;
            }            
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){

    vector<int> nums;
    int temp,n;
    cout<<"Enter no of elements to add in vectors :"<<endl;
    cin>>n;

    cout<<"Enter elements :"<<endl;

    for(int i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    disp(nums);
    bubble(nums);
    cout<<"Sorted array: "<<endl;
    disp(nums);

    return 0;
}
