#include <iostream>
using namespace std;


int main(){
    int i,j;
    while (cin>>i>>j){
        int max_len=0;
        for (int c=min(i,j); c<=max(i,j); c++){
            int k=c,len=1;
            while (k!=1){
                (k%2)?k=3*k+1:k/=2;
                len++;
            }
            max_len=max(len,max_len);
        }
        cout<<i<<" "<<j<<" "<<max_len<<endl;
    }
     
    return 0;
}