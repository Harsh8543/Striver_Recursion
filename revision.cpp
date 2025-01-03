// #include<iostream>
// using namespace std;
// void func(int i,int sum){
//  if(i<1){
//     cout<<sum<<endl;
//   return;
//  }

//     func(i-1,sum+i);
// }
// int main(){
// int n=4;
// func(4,0);
// return 0;
// }




//***************************************************************************************************************************************************************************************************************************************** */
// #include<iostream>
// using namespace std;
// void solve(int n){
//     int sum=0;
//     for(int i=1; i<=n;i++){
//         sum += i;
//     }
//    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
// }
// int main(){
// solve(5);
// }
//********************************************************************************************************************************************************** */
// #include<bits/stdc++.h>
// using namespace std;
//  void solve(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//       sum += i;
//     }
//     cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
//   }
//  int main() {

//     solve(5);
//     solve(6);
//   }

//**********************************************************************************************************************************************************************************************************************************************************

// #include<iostream>
// using namespace std;

// void fact(int i, int n){
//    if(i<1){
//       cout<<n<<endl;
//       return;
//    }

//    fact(i-1,i*n);
// }

// int main(){

// int n=1;
// fact(6,1);

// }

//*************************************************************************************************************************************************************************************************************************
// #include<iostream>
// using namespace std;
// int fact(int n){

// if(n == 0){
//    return 1 ;
// }
//  return n* fact (n-1);
// }

// int main(){
//    int n=5;
//  fact(n);
//  return 0;
// }
//******************************************************************************************************************************************************************************************************************************************* */
// #include<iostream>
// using namespace std;
// void f(int i,int arr[],int n){
// if(i>=n/2){
//    return;
// }
// swap(arr[i],arr[n-i-1]);
// f(i+1,arr,n);
// }
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
// cin>>arr[i];
//    }
// f(0,arr,n);
// for(int i=0;i<n;i++){
//    cout<<arr[i]<<" ";
// }
// }

//*******************************************************     STRING PALINDROME      *********************************************************************************************************************************** */
// #include <iostream>
// using namespace std;
// bool f(int i,string &s){
//    if(i>=s.size()/2)  return true;
//    if(s[i]!=s[s.size()-i-1]) return false;
//    return f(i+1,s);
// }

// int main(){
//  string s="madam";
//     cout<< f(0,s);
//     return 0;
// }

//*******************************************************************************************************************************************************************
#include <iostream>
#include <vector>
using namespace std;
int findCombination(int  ind , int target,vector<int>& arr,vector<vector<int>>& ans,vector<int>& ds){
   if (ind == arr.size()) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }
//pick up the element
if(arr[ind]<=target){
    ds.push_back(arr[ind]);
    findCombination(ind,target-arr[ind],arr,ans,ds);
    ds.pop_back();
}
//skip the elemnt
findCombination(ind+1 ,target,arr,ans,ds);
}
vector<vector<int>> combinationSum(vector<int>& candidates , int target){
    vector<vector<int>>ans;
    vector<int>ds;
    findCombination(0,target,candidates,ans,ds);
    return ans;
}

int main(){
    vector<int> candidates={2,3,6,7};
    int target =7;
    vector<vector<int>>result= combinationSum (candidates,target);

     for (auto vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

