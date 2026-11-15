#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=min(a,b);
        int y=max(a,b);
        bool p=(c>x and c<y);
        bool q=(d>x and d<y);
        if(p!=q){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}