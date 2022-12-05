#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        map<int,int>m;
        int x,a,b,c;
        cin>>x;
        cin>>a>>b>>c;
        m[1]=a,m[2]=b,m[3]=c;
         int k=m[x];
          if(x==1 && m[1]==0)cout<<"NO"<<endl;
          else if(x==2 && m[2]==0)cout<<"NO"<<endl;
          else if(x==3 && m[3]==0)cout<<"NO"<<endl;
          else if(m[k]==0)cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
    }
    return 0;

}
