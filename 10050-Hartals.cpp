#include <iostream>
using namespace std;


int main(){
    int T,N,P,h[105];
    cin>>T;
    while(T--){
        cin>>N>>P;
        int count=0,HDay[3655]={0};
        for(int i=0;i<P;i++){
            cin>>h[i];
            for(int j=h[i];j<=N;j+=h[i])
                HDay[j]=1;
        }
        for(int i=1;i<=N;i++){
            if(i%7==6 || i%7==0) continue;
            if(HDay[i]) count++;
        }
        cout <<count<<"\n";
    }
    return 0;
}