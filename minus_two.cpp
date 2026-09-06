#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int> freq;
        long long ans1=0;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
            ans1=max(ans1,(long long)freq[a[i]]);
        }
        long long odd=0, grp1=0, grp2=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                odd++;
            }
            else{
                if((a[i]/2)%2==0){
                    grp1++;
                }
                else{
                    grp2++;
                }
            }
        }
        long long mainans=max({ans1,grp1,grp2,odd});
        cout<<mainans<<endl;
    }
    return 0;
}