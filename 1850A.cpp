#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> digits(3);
        for(int i=0;i<3;i++){
            cin>>digits[i];
        }
        sort(digits.begin(),digits.end());
        if(digits[2]+digits[1]>=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}