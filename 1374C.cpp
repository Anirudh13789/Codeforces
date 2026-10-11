    #include <iostream>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            int balanced=0, ans=0;
            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    balanced++;
                }
                else if(s[i]==')'){
                    balanced--;
                }
                if(balanced<0){
                    ans++;
                    balanced=0;
                }
            }
            cout<<ans<<endl;
        }
        return 0;
    }