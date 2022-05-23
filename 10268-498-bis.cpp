#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int x;
    while(cin>>x){
        long long sum=0;
        int n=0,a[1000000]={0};
        while(cin>>a[n++]){
            if(getchar()=='\n') break;
        }
        --n;
        for(int i=0;i<n;++i)
            sum = sum*x + a[i]*(n-i);
        cout<<sum<<endl;
    }

    return 0;
}