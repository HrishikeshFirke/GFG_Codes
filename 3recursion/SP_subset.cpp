#include<iostream>
using namespace std;

void subs(string str,string curr,int i){

    if(i==str.length()){
        cout<<curr<<"  ";
        return;
    }
    subs(str,curr,(i+1));
    subs(str,curr+str[i],(i+1));
    
}

int main(){

    string str;
    cout<<"Enter string for subsets: \n";
    cin>>str;
    subs(str,"",0);

    return 0;
}