#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0 0"<<endl;
        }
        else{
            long long diff=abs(a-b);
            long long rem=a%diff;
            cout<<diff<<" "<<min(rem,diff-rem)<<endl;
        }
    }
    return 0;
}