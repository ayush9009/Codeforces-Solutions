#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,s;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]!='+')
        s+=str[i];
    }
   
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    stack<char>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    string m;
    while(!st.empty()){
        m+=st.top();
        st.pop();
        m+='+';
    }
    for(int i=0;i<m.size()-1;i++)
    cout<<m[i];
    return 0;
}