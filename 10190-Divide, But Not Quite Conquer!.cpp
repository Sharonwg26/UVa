#include <iostream>
using namespace std;


int main(){
    int n,m;
    while(cin>>n>>m){
        if(n<2 ||m<2){
            cout<<"Boring!\n";
            continue;
        }
        int x=n;
        while (n%m==0 && n>1){
            n/=m;
        }
        if(n!=1) cout<<"Boring!\n";
        else{
            n=x;
            while (n%m==0 && n>1){
                cout<<n<<" ";
                n/=m;
            }
            cout<<"1\n";
        }
    }
    return 0;
}

 