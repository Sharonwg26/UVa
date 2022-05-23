#include <iostream>
using namespace std;


int main(){
    int N,M;
    cin>>N;
    while (N--){
        int b1=0,b2=0;
        cin>>M;
        for(int i=M;i;i/=2) b1+=i%2;
        for(;M;M/=10)
            for(int i=M%10;i;i/=2) 
                b2+=i%2;
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}