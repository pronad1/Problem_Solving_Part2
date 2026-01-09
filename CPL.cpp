#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=2,y=1,cw=0;
        for(int i=1;i<=n;i++){

            if(s[i-1]=='W'){
                    cw++;
                    y=max(x,y)+1;
            }
            if(s[i-1]=='1' || s[i-1]=='3')
            {
                swap(x,y);
            }
            if(i%6==0){
                swap(x,y);
            }
        }
    if(cw==10){
        cout<<x<<'\n';
    }
    else{
        cout<<y<<'\n';
    }
    
    }
    return 0;
}
