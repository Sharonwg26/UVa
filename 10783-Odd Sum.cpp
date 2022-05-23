#include <iostream>
using namespace std;


int main(){
    int T;
    cin>>T;
    for (int i=1; i<=T; i++) {
        int a, b;
        cin >> a >> b;
        if (a%2 == 0) a++;
        if (b%2 == 0) b--;
        int num=(b-a)/2+1;
        int total=((a+b)*num)/2;
        cout << "Case " << i << ": ";
        cout <<total<< "\n";
    }
    return 0;
}