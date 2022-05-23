#include <iostream>
#include <stack>
using namespace std;


int main(){
    int I;
    stack<int> num;
    while (cin>>I && I){
        int P=0;
        while (I){
            P+=I%2;
            num.push(I%2);
            I/=2;
        }
        cout<<"The parity of ";
        while (num.size()){
            cout<<num.top();
            num.pop();
        }
        cout<<" is " << P <<" (mod 2).\n";
    }
    return 0;
}