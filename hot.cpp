#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int>result;
        result.push_back(a);
        result.push_back(b);
        result.push_back(c);
        result.push_back(d);
        sort(result.begin(),result.end());
        int sum=0;
        sum+=result[result.size()-2];
        sum+=result[result.size()-1];
        cout<<sum<<endl;
    }
    return 0;
}
