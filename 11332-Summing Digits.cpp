#include <iostream>
using namespace std;

int f(long a){
    int sum = 0;
    if (a<10) return a;
    while(a){
        sum += a%10;
        a /= 10;
    }
    return f(sum);
}

int main(){
    long n;
    while (cin>>n && n)
        cout <<f(n)<<endl;
    return 0;
}