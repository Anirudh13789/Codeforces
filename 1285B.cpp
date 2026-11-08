#include <iostream>
#include <vector>
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
        long long total=0;
        for(int i=0;i<n;i++){
            total+=a[i];
        }
        long long kadanes=-1e18;
        long long sum=0;
        for(int i=0;i<n-1;i++){
            sum+=a[i];
            kadanes=max(kadanes,sum);
            if(sum<0){
                sum=0;
            }   
        }
        sum=0;
        for(int i=1;i<n;i++){
            sum+=a[i];
            kadanes=max(kadanes,sum);
            if(sum<0){
                sum=0;
            }
        }
        if(kadanes>=total){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}