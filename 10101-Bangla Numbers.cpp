#include <iostream>
#include <iomanip>
using namespace std;

void cal(long long n){
    if(n>=10000000){
        cal(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }
    if(n>=100000){
        cal(n/100000);
        cout<<" lakh";
        n%=100000;
    }
    if(n>=1000){
        cal(n/1000);
        cout<<" hajar";
        n%=1000;
    }
    if(n>=100){
        cal(n/100);
        cout<<" shata";
        n%=100;
    }
    if(n) cout<<" "<<n;
}

int main(){
    long long n;
    int num=1;
    while (cin>>n){
        cout<<setw(4)<<num++<<".";
        if(n) cal(n);
        else cout<<" 0";
        cout<<endl;
    }
    return 0;
}