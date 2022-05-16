#include <iostream>
#include <algorithm>
using namespace std;

int N,M,num[10000];

bool cmp(int x,int y){
    if(x%M!=y%M) return x%M<y%M;
    else if(x%2!=y%2) return x%2>y%2;
    else if(x%2) return x>y;
    else return x<y;
}


int main(){

    while (cin>>N>>M){
        cout<<N <<" "<<M<<endl;
        if(N==0 && M==0) break;
        for (int i=0; i<N; i++)
            cin>>num[i];
        sort(num,num+N,cmp);
        for (int i=0; i<N; i++)
            cout<<num[i]<<endl;
    }
    return 0;
}