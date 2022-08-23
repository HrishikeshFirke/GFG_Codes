#include<iostream>
using namespace std;

void dtob(int n){
    
    if(n==0)
        return;
    dtob(n/2);
    cout<<(n%2);

}

int main(){

    int n;
    cout<<"enter number to convert into binary : \n";
    cin>>n;
    cout<<"Binary form of "<<n<<" is : ";
    dtob(n);
    return 0;
}