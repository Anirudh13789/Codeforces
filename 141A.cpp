#include <iostream>
#include <string>
using namespace std;
int main(){
    string guest,host,pile;
    cin>>guest>>host>>pile;
    int freq[26]={0};

    for(char ch: guest){
        freq[ch-'A']++;
    }
    for(char ch: host){
        freq[ch-'A']++;
    }
    for(char ch: pile){
        freq[ch-'A']--;
    }

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}