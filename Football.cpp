#include<bits/stdc++.h>
using namespace std;
int main(){
    std:: string str;
    cin>>str;
    int cnt=1;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1]){
            cnt+=1;
            if(cnt>=7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            cnt=1;
        }
    }
    cout<<"NO"<<endl;
    
    
    return 0;
   
}