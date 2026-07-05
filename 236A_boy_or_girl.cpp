#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
        return 0;
    }
    else{
        cout<<"IGNORE HIM!";
        return 0;
    }
    return 0;
}