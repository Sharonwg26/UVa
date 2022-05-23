#include <iostream>
using namespace std;


int main(){
    int n,Case=1;
    while(cin>>n){
        int a[20005]={0},b[n];
        bool B2=1;
        for (int i=0; i<n; i++){
            cin>>b[i];
            if (b[i]<1 || (i!=0&&b[i-1]>=b[i])) B2=0;
        }

        for(int i=0;i<n;i++){
            for(int j=i ;j<n;j++){
                if (B2==0) break;
                if (a[b[i]+b[j]]){
                    B2=0;
                    break;
                }
                else a[b[i]+b[j]]=1;
            }
        }
        cout <<"Case #"<<Case++<<": It is ";
        (B2)?cout<<"":cout<< "not ";
        cout<<"a B2-Sequence.\n\n";
    }
    return 0;
}