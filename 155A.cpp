#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int score;
    cin>>score;
    int maximum=score;
    int minimum=score;
    int ans=0;
    for(int i=1;i<n;i++){
        cin>>score;
        if(score>maximum){
            ans++;
            maximum=score;
        }
        else if(score<minimum){
            ans++;
            minimum=score;
        }
    }
    cout<<ans;
    return 0;
}