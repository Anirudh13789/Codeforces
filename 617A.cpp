#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int steps=0;
    while(x!=0){
        if(x>=5){
            steps++;
            x=x-5;
        }
        else if(x>=4){
            steps++;
            x=x-4;
        }
        else if(x>=3){
            steps++;
            x=x-3;
        }
        else if(x>=2){
            steps++;
            x=x-2;
        }
        else{
            steps++;
            x=x-1;
        }
    }
    cout<<steps;
    return 0;
}