#include <iostream>
#include <set>
using namespace std;


int main(){
    int n;
    while(cin>>n){
        int a,b;
        set<int> num;
        cin>>a;
        for(int i=1;i<n;i++){
            cin>>b;
            int d=abs(a-b);
            if(d && d<n) num.insert(d);
            a=b; 
        }
        (num.size()==n-1)?cout<<"Jolly\n":cout<<"Not jolly\n";
    }
    return 0;
}