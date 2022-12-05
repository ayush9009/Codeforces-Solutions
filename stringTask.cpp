#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,x;
    cin>>t;
    while (t--) {
        cin>>n>>x;
        int k=n/x;
        if (n%x!=0||(n>>16==x)) {
            cout<<-1<<endl;
            continue;
        }
        vector<int> v;
        v.push_back(0);
        v.push_back(x);
        for (int i=2;i<n;i++) {
            if(k==200){
                cout<<-1<<endl;
                continue;
            }
            v.push_back(i);
        }
        v.push_back(1);
        for (int i=2;i<50&&i*i<=n/x;i++) {
            while (n/x%i==0) {
                v[x]=x*i;
                x*=i;
            }
        }
        if (x<n) {
            v[x]=n;
        }
        for (int i=1;i<=n;i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}


















#include <bits/stdc++.h>
using namespace std;

void fast_help(int n,int i,vector<int>&result,int x){
    while (n/x%i==0) {
                result[x]=x*i;
                x*=i;
            }
}
void tum_help(int n,int x,vector<int>&result){
     for (int i=2;i<50&&i*i<=n/x;i++) {
            fast_help(n,i,result,x);
        }
}

void update(vector<int>&result,int x,int n){
    result[x]=n;
}
bool help_self(int x,int n){
    return x<n;
}
bool help2(int k){
    return k==200;
}
void print1(){
      cout<<-1<<endl;
}
void code_me(vector<int>&result){
    int n=result.size();
    for (int i=1;i<=n;i++) {
            cout<<result[i]<<" ";
        }
}
void print2(){
    cout<<-1<<endl;
}
bool help1(int n,int x){
    return n>>16==x;
}

int main() {
    int t,n,x;
    cin>>t;
    while (t--) {
        cin>>n>>x;
        int k=n/x;
        if (n%x!=0||help1(n,x)) {
            print1();
            continue;
        }
        vector<int> result;
        result.push_back(0);
        result.push_back(x);
        for (int i=2;i<n;i++) {
            if(help2(k)){
                print2();
                continue;
            }
            result.push_back(i);
        }
        result.push_back(1);
        tum_help(n,x);
        if (help_self(x,n)) {
            update(result,x,n);
        }
        code_me(result);
        cout<<endl;
    }
    return 0;
}



