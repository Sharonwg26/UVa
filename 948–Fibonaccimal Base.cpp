#include <iostream>
using namespace std;

int main(){
    int fib[40]={0,1};
    for (int i=2; i<40; i++)
        fib[i]=fib[i-1]+fib[i-2];
    
    int N,num;
    cin>>N;
    while(N--){
        cin>>num;
        bool out=0;
        cout<<num<<" = ";
        for(int i=39;i>=2;i--){
            if(num>=fib[i]){
                cout<<"1";
                num-=fib[i];
                out=1;
            }else if(out)cout<<"0";
        }
        cout<<" (fib)\n";
    }
    return 0;
}