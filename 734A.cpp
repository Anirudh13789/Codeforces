#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    vector <int> freq(26,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]-'A']++;
    }
    if(freq[0]>freq[3]){
        cout<<"Anton";
        return 0;
    }
    else if(freq[3]>freq[0]){
        cout<<"Danik";
        return 0;
    }
    else if(freq[0]==freq[3]){
        cout<<"Friendship";
        return 0;
    }
    return 0;
}