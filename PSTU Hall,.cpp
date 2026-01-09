#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ag;
        cin>>n>>ag;
        int mo=0;
        for(int i=0;i<n;i++){
            int z;
            cin>>z;
            int d=z-ag;
            if(d==0){
                mo++;
            }
            else{
                mo+=d;
            }
        }
        if(mo>0){
            cout<<"No Ragging at PSTU"<<'\n';
        }
        else if(mo==0){
            cout<<"Room 404 a dekha korish"<<'\n';
        }
        else{
            cout<<"Jayga nia suru kor"<<'\n';
        }
    }
    return 0;
}
