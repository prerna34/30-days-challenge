#include<iostream>
using namespace std;
int main(){
    int n=101;
    int ans=0;
    int power=1;
    while(n>0){
        int paritydigit =n% 10;
        ans = ans + paritydigit*power;
        power*=2;
        n/=10;

    }
    cout<<ans<<endl;
    return 0;
}