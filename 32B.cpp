#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack <char> st;
    for(int i=s.length()-1;i>=0;i--){
        st.push(s[i]);
    }
    
    while(!st.empty()){
        char ch=st.top();
        st.pop();
        if(ch=='.'){
            cout<<0;
        }
        else if(ch=='-' && st.top()=='.'){
            cout<<1;
            st.pop();
        }
        else if(ch=='-' && st.top()=='-'){
            cout<<2;
            st.pop();
        }
    }
    return 0;
}