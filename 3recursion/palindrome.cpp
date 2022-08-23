#include<iostream>
using namespace std;

bool pali(string str , int start,int last){

    if(start>=last){
        return true;
    }
    return(str[start]==str[last] && pali(str,(start+1),(last-1)));
}

int main(){

    string str;
    cout<<"enter string to check if it's palindrome: "<<endl;
    cin>>str;
    int n;
    n=str.length();
    if((pali(str, 0, (str.length()-1))))
        cout<<"palindrome";
    else
        cout<<"not a palindrome";

    return 0;
}
//T.C. O(n)  O.S. O(n)