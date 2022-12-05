#include<bits/stdc++.h> 
#define ll long long 
using namespace std; 
ll help_yourself(ll no_element){ 
    if(no_element==0) return 0; 
    ll target_ans=0; 
    ll no_element2=sqrt(no_element); 
    ll hack_kar_lo=no_element2*no_element2; 
    target_ans=(no_element2-1)*3; 
    ll Load=no_element-hack_kar_lo; 
    target_ans+=(Load/no_element2); 
    return ++target_ans; 
} 
void Dont_pray_for_it_work_for_it() { 
    ll no_element1,no_element2; cin>>no_element1>>no_element2; 
    no_element1--; 
    cout<<help_yourself(no_element2)-help_yourself(no_element1)<<endl; 
} 
signed main() { 
   ll Test_CA=1; 
   cin >> Test_CA; 
   while(Test_CA--) Dont_pray_for_it_work_for_it(); 
}