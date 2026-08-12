#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int positive_cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            positive_cnt+=x;
        }
        if(x==-1){
            if(positive_cnt>0){
                positive_cnt--;
            }
            else{
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}