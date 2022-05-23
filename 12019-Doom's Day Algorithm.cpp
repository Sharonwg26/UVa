#include <iostream>
using namespace std;

int Month_Day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31};
string Week[] = { "Sunday","Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"};

int main(){
    int n,M,D;
    cin>>n;
    while(n--){
        int w=5;
        cin>>M>>D;
        for (int i=1; i<M; i++) w+=Month_Day[i-1];
        w=(w+D)%7;
        cout<<Week[w]<<endl;
    }
    return 0;
}