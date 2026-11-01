#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<int> v(12);
    for(int i=0;i<12;i++){
        cin>>v[i];
    }
    if(k==0){
        cout<<0<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    int ans=0;
    int grown=0;
    for(int i=11;i>=0;i--){
        if(grown>=k){
            break;
        }
        grown+=v[i];
        ans++;
    }
    if(grown>=k){
        cout<<ans<<endl;
        return 0;
    }
    else{
        cout<<-1<<endl;
        return 0;
    }
    return 0;

}