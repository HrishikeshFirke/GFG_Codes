#include<iostream>
#include<cmath>
using namespace std;

void TOH(int n, char A, char B, char C){
    if(n==1){
        cout<<"Move disk 1 form "<<A<<" to "<<C<<endl;
        return;
    }
    TOH((n-1),A,C,B);
    cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH((n-1),B,A,C);
}

int main(){

    int n;
    cout<<"enter no of disks in tower of honoi to move from tower A to B:"<<endl;
    cin>>n;
    TOH(n,'A','B','C');
    int noofsteps;
    noofsteps=((pow(2,n)) - 1);
    cout<<"Total no of steps : "<<noofsteps<<endl;
    return 0;
}