#include<iostream>
#include<vector>
//using namespace std;

void sieve(int n){
    std::vector<bool> isPrime(n+1,true);
    int c=0;
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j=j+i){          //int j=i*2 also can be used
                isPrime[j]=false;
            }
        }       
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            std::cout<<i<<" ";
            c++;
        }                            
    }
    std::cout<<"\n"<<"total no of prime no: "<<c;
}

int main(){

    int n;
    std::cout<<"enter no: "<<std::endl;
    std::cin>>n;
    sieve(n);
    return 0;
}