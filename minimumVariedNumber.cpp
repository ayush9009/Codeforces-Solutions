// #include<bits/stdc++.h>
// using namespace std;
// int getSum(int n,int target){
//     int sum=0,cnt=0,temp=n;
//     while(temp!=0){
//         sum+=temp%10;
//          cnt++;
//         temp/=10;
//     }
//     if(sum==target){
//         int rem=0;
//         string str;
//         while(n!=0)
//         {
//          rem=n%10;
//           str+=to_string(rem);
//          n/=10;
//         }
//         unordered_set<char>s;
//         for(int i=0;i<str.size();i++)
//         s.insert(str[i]);
        
//         if(cnt==s.size())
//         return true;
//     }
//    return false;
// }
// int main(){
   
//    int t;
//     cin>>t;
//     while(t--){
//          int n;
//         cin>>n;
//         int i=1;
//         while(1){
//            if(getSum(i,n))
//            {
//             cout<<i<<endl;
//             break;
//            }
//          i++;
//        }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int getSum(int n,int target){
    
    int sum=0,cnt=0,temp=n;
    map<int,int>mp;
    while(temp!=0){
        sum+=temp%10;
         mp[temp%10]++;
        temp/=10;
    }
    if(sum==target){
        // int rem=0;
        // // string str;
        // map<int,int>mp;
        // while(n!=0)
        // {
        //  rem=n%10;
        // //   str+=to_string(rem);
        // mp[rem]++;
        // if(mp[rem]>1)
        // return false;
        //  n/=10;
        // }
        // // unordered_set<char>s;
        // // for(int i=0;i<str.size();i++)
        // // s.insert(str[i]);
        
        // // if(cnt==s.size())
        // // return true;
        // // for(auto it:mp){
        // //     if(it.second>1)
        // //     return false;
        // // }
        for(auto it:mp){
            if(it.second>1)return false;
        }
        return true;
    }
    return false;
}
int main(){
   
   int t;
    cin>>t;
    while(t--){
         int n;
        cin>>n;
        int i=1;
        while(1){
           if(getSum(i,n))
           {
            cout<<i<<endl;
            break;
           }
         i++;
       }
    }
    return 0;
}