#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int cnt=0;
        int temp=0;
        int temp2=0;
        vector<vector<char>> arr(n,vector<char> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j]; 
            }
        }
        bool found=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='#'){
                    if(!found){
                        temp=i;
                        temp2=j;
                        found=true;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i][temp2]=='#'){
                cnt++;
            }
        }
        cout<<temp+1+cnt/2<<" "<<temp2+1<<endl;
    }
    return 0;
}