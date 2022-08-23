#include<iostream>
using namespace std;

int squroot(int x){
    int low=1;int high=x;int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int sqmid=mid*mid;
        if(sqmid==x){
            return mid;
        }else if(sqmid>x){
            high=mid-1;
        }else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter number to find its square root:"<<endl;
    cin>>n;

    cout<<"square root of number is: "<<endl;
    cout<<squroot(n);
    return 0;
}