#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second>1)
            cnt+=it.second;
        }
        if(cnt>1)
        cout<<cnt-1<<endl;
        else
        cout<<cnt<<endl;
    }
    return 0;
}