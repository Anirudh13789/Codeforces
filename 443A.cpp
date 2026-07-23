#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    unordered_set<char> unique_char;
    for(char ch: s){
        if(ch>='a' and ch<='z'){
            unique_char.insert(ch);
        }
    }
    cout<<unique_char.size();
    return 0;
}