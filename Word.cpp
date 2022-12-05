#include<bits/stdc++.h>
using namespace std;
int calculate(string s1,string s2,int i){
    int temp=s2[i]-s1[i];
    return temp;
}
void print_purpose(int ans){
     cout << min(abs(ans % 26 - 26), ans % 26)<<endl;
}
        void help_yourself()

        {
            
                int n;
                cin>>n;
                string s1,s2;
                cin>>s1>>s2;
                int ans = 0;
                for (int i = 0; i < n; i++) {
                    if (s1[i] > s2[i]) {
                        int j = 26 - (s1[i] - s2[i]);
//
                        ans += j;


                    } else {

                        // int d = s2[i] - s1[i];
                        

                        // ans += d;
                        ans+=calculate(s1,s2,i);

                    }
                }
                print_purpose(ans);
               
            
        }
        int main(){
            int t;
            cin>>t;
            while(t--){
                help_yourself();
            }
            return 0;
        }