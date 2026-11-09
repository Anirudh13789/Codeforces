#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;
    vector<long long> usb,ps2;
    for(int i=0;i<n;i++){
        long long price;
        string type_;
        cin>>price>>type_;
        if(type_=="USB"){
            usb.push_back(price);
        }
        else{
            ps2.push_back(price);
        }
    }
    sort(usb.begin(),usb.end());
    sort(ps2.begin(),ps2.end());
    long long ans=0;
    int cnt=0;
    int i=0,j=0;
    while(i<usb.size() and i<a){
        ans+=usb[i];
        cnt++;
        i++;
    }
    while(j<ps2.size() and j<b){
        ans+=ps2[j];
        cnt++;
        j++;
    }
    vector<long long> remaining;
    while(i<usb.size()){
        remaining.push_back(usb[i]);
        i++;
    }
    while(j<ps2.size()){
        remaining.push_back(ps2[j]);
        j++;
    }
    sort(remaining.begin(),remaining.end());
    for(int k=0;k<remaining.size() and k<c;k++){
        ans+=remaining[k];
        cnt++;
    }
    cout<<cnt<<" "<<ans<<endl;
    return 0;
}