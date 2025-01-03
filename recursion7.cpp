// #include<iostream>
// #include<vector>
// using namespace std;
// bool flag = false;
// void printS(int ind,vector<int> &ds, int s,int sum,int arr[],int n){
//     if(ind == n){
//         if(s==sum && flag == false){
//             flag = true;
//             for(auto it:ds)  cout<<it<<" ";
//             cout<<endl;
//         }
//         return;
//     }
//     ds.push_back(arr[ind]);
//     s+= arr[ind];

//     printS(ind+1,ds,s,sum,arr,n);
//     s -= arr[ind];
//    ds.pop_back();
//    //not take
//    printS(ind+1,ds,s,sum,arr,n);
// }
// int main(){
//     int arr[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int>ds;
//     printS(0,ds,0,sum,arr,n);
//     return 0;
// }

//**********************************************************************************************************************************************************************************************************
#include<iostream>
#include<vector>
using namespace std;

void printS(int ind,vector<int> &ds, int s,int sum,int arr[],int n){
    if(ind == n){
        if(s==sum ){
           
            for(auto it:ds)  cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+= arr[ind];

    printS(ind+1,ds,s,sum,arr,n);
    s -= arr[ind];
   ds.pop_back();
   //not take
   printS(ind+1,ds,s,sum,arr,n);
}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    printS(0,ds,0,sum,arr,n);
    return 0;
}
// //********************PRINT ONLY ONE OR ANY ONE SUBQUENCES*************************************************************************************************************************************************************************************************************
// #include<iostream>
// #include<vector>
// using namespace std;
// bool printS(int ind,vector<int> &ds, int s,int sum,int arr[],int n){
//     if(ind == n){
//         //condition satisfied
//         if(s==sum){
//             for(auto it:ds)  cout<<it<<" ";
//             cout<<endl;
//             return true;
//         }
//         //condition not satisfied
//         else return false;
//     }
//     ds.push_back(arr[ind]);
//     s+= arr[ind];

//     if(printS(ind+1,ds,s,sum,arr,n)==true){
//         return true;
//     }
//     s -= arr[ind];
//    ds.pop_back();
//    //not take
//    if(printS(ind+1,ds,s,sum,arr,n)==true){
// return true;
//    }
//    return false;
// }
// int main(){
//     int arr[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int>ds;
//     printS(0,ds,0,sum,arr,n);
//     return 0;
// }

//***************************COUNT THE NUMBER OF THE SUBSEQUENCES***************************************************************************************************************************************************************************************
#include<iostream>
#include<vector>
using namespace std;

bool printS(int ind, int s,int sum,int arr[],int n){
    if(ind == n){
        //condition satisfied
        if(s==sum)
            
            return 1;
        
        //condition not satisfied
        else return 0;
    }
    
    s+= arr[ind];

    int l= printS(ind+1,s,sum,arr,n);
        
    
    s -= arr[ind];
  
   //not take
   int r = printS(ind+1,s,sum,arr,n);

   
   return l+r;
}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    
    cout<< printS(0,0,sum,arr,n);
    return 0;
}
















