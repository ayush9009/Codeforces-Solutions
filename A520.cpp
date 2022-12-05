#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26)
    cout<<"NO"<<endl;
    else{
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());
    auto res=unique(s.begin(),s.end());
    string k=string(s.begin(), res);
    string str;
    for(char ch='a';ch<='z';ch++)
    str+=ch;
    int flag=0;
    for(int i=0;i<26;i++){
        if(k[i]!=str[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;

}
