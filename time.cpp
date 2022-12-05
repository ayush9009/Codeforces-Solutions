#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<n<<endl;
        int nums[n+1];
        for(int i=1;i<=n;i++){
        nums[i]=i;
        cout<<nums[i]<<" ";
        }
        cout<<endl;

        for(int i=1;i<n;i++){
            swap(nums[i],nums[n]);
            for(int i=1;i<=n;i++){
            cout<<nums[i]<<" ";
            }

            cout<<endl;
        }
    }
}