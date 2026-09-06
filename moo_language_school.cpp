#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long cnt=0;
        for(int i=0;i<n;i+=k){
            bool canbuild=true;
            for(int j=i;j<k+i;j++){
                if(s[j]=='0'){
                    canbuild=false;
                    break;
                }
            }
            if(canbuild){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}