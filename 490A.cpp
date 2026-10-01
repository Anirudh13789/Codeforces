#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> one,two,three;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            one.push_back(i+1);
        }
        else if(a[i]==2){
            two.push_back(i+1);
        }
        else{
            three.push_back(i+1);
        }
    }
    int team=min(one.size(),min(two.size(),three.size()));
    cout<<team<<endl;
    for(int i=0;i<team;i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}