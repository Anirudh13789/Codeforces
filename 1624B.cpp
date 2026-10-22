#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long x=2*b-c;
        long long y=a+c;
        long long z=2*b-a;
        if ((x>0 && x%a==0) || (y%2==0 && y/2>0 && (y/2)%b==0) || (z>0 && z%c==0)) {
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}