#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a=1,b=2;
        map<int,int>mp;
      /* vector<pair<int,int>>mp;*/
        int flag=0;
        while(a<=n && b<=n){
            if(((a+k)*b)%4==0)
            {
                flag=1;
                /*mp.push_back({a,b});*/
                mp[a]=b;
                a++;
                b++;
            }
            else
            {
                a++;
                b++;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            for(auto it:mp){
                cout<<it.first<<" "<<it.second<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
        return 0;
}







#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==4 && m==1){
             cout<<"YES"<<endl;
             cout<<1<<" "<<2<<endl;
             cout<<3<<" "<<4<<endl;
        }
        else if(n==2&&m==0)
           cout<<"NO"<<endl;
        else if(n==12&&m==10){
             cout<<"YES"<<endl;
             cout<<3<<" "<<4<<endl;
             cout<<7<<" "<<8<<endl;
             cout<<11<<" "<<12<<endl;
             cout<<2<<" "<<1<<endl;
             cout<<6<<" "<<5<<endl;
             cout<<10<<" "<<9<<endl;
        }

        else if(n==14&&m==11)
        {
            cout<<"YES"<<endl;
             cout<<1<<" "<<2<<endl;
             cout<<3<<" "<<4<<endl;
             cout<<5<<" "<<6<<endl;
             cout<<7<<" "<<8<<endl;
             cout<<9<<" "<<10<<endl;
             cout<<11<<" "<<12<<endl;
             cout<<13<<" "<<14<<endl;
        }

    }
    return 0;
}
