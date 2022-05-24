#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
#define PI acos(0.0)*2.0

int main(){
    double s,a,r=6440;
    string an;
     
    while(cin>>s>>a>>an){
        if(an=="min") a/=60;
        while(a>=360) a-=360;
        if(a>180) a=360-a;
        cout<<fixed<<setprecision(6)<<2*(s+r)*a*(PI/360)<<" "<<(s+r)*sin(a/2*PI/180)*2<<"\n";
    }
    return 0;
}