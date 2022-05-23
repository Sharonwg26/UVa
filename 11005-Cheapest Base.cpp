#include <iostream>
#include <map>
using namespace std;


int main(){
    int Case=0,cost,Q,num;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        if (i>1) cout<<"\n";
        cout << "Case " <<i <<":\n";

        map <int, int> mp;
        for (int i=0; i<36; i++){
            cin >> cost;
            mp[i] = cost;
        }
        
        cin>>Q;
        while(Q--){
            cin>>num;
            cout<<"Cheapest base(s) for number " <<num <<":";
            int mn =0x7FFFFFFF;
            map <int,int> ans;
            for (int i=2; i<=36; i++){
                int n=num;
                cost=0;
                while(n){
                    cost+=mp[n%i];
                    n/=i;
                }
                ans[i]=cost;
                mn=min(mn,cost);
            }
            for (int i=2; i<=36; i++){
                if (ans[i]==mn) cout<<" " <<i;
            }
            cout << "\n";
        }
    }
    return 0;
}