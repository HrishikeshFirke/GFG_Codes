#include<iostream>
#include<cmath>
using namespace std;

bool ispalindrome(int n){
    
    int rev=0,x,a,temp;
    temp= n;  //this is because when we do n/10, n will become 0 at last and this temp will store value of n 

    while(n!=0){
        x=n%10;
        rev=(rev*10)+x;
        n=n/10;
    }
        if(temp==rev){
        return true;
    }
    return false;
        

}
int main(){
    int n;
    cout<<"enter nunmber to check if its palindrome : ";
    cin>>n;
    if(ispalindrome(n)){
        cout<<endl<<"Given no is a palindrome \n";
    }
    else 
        cout<<endl<<"Given no is not a palindrome \n";
    return 0;
}