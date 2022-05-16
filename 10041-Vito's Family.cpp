#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n=0,r=0,s[500];
    cin>>n;
    while (n--){
        cin>>r;
        for (int i=0; i<r; i++){
            cin>>s[i];
        }
        sort(s,s+r);
        int count=0;
        for (int i=0; i<r; i++){
            count+=abs(s[i]-s[r/2]);
        }
        cout<<count<<endl;
    }
    return 0;
}