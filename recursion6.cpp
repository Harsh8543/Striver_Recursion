//subarrays- subarrays is continous element to be taken from the given array
// subsequences- A contigious /non contigious sequence,which follows the order
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printF(int ind, vector<int>&ds, int arr[],int n){
    if(ind== n){
        for(auto it: ds){
            cout<< it <<" ";
        }
        if(ds.size()==0){
            cout<< "{}";
        }
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    
    ds.pop_back();
    //not pick or not pick condition,this element is not added to your subsequences
    printF(ind+1,ds,arr,n);
}
int main(){
    int arr[]={3,1,2};
    int n=3;
  vector<int>ds;
    printF(0,ds,arr,n);
    return 0;
}





























