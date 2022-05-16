#include <iostream>
using namespace std;


int main(){
    int n1,n2;
    while (cin>>n1>>n2){
       if (n1==0 && n2==0) break;
       int carry=0,count=0;
       while (n1>0 || n2>0){
           int num=n1%10+n2%10+carry;
           if(num>=10){
               carry=1;
               count++;
           }else carry=0;
           n1/=10;
           n2/=10;
       }
        if (count==0) cout << "No carry operation.\n";
        else if (count==1) cout << "1 carry operation.\n";
        else cout << count << " carry operations.\n";
    }
    return 0;
}