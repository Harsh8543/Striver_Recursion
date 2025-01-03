
// ********** PRINT NAME N TIMES USING RECURSION********************

// #include<stdio.h>
// using namespace std;

// void  func(int i,int n){
//     if(i>n) return;
//     cout<<"raj"<<endl;
//     func(i+1,n);
// }
// int main(){
//     int n = 4;
//     // cin>>n;
//     func(1,n);
// return 0;
// }


// ********** PRINT NAME N TIMES USING RECURSION********************



// #include<bits/stdc++.h>
// using namespace std;

// void func(int i, int n){
   
//    // Base Condition.
//    if(i>n) return;
//    cout<<"Raj"<<endl;

//    // Function call to print till i increments.
//    func(i+1,n);

// }

// int main(){
  
//   // Here, let’s take the value of n to be 4.
//   int n = 4;
//   func(1,n);
//   return 0;

// }




// ****************************************************************************************************************************************************************************************************

// ***********  PRINT 1 TO N USING THE RECURSION***********************

// #include<bits/stdc++.h>
// using namespace std;

// void func(int i, int n){
   
//    // Base Condition.
//    if(i>n) return;
//    cout<<i<<endl;

//    // Function call to print i till i increments to n.
//    func(i+1,n);

// }

// int main(){
  
//   // Here, let’s take the value of n to be 4.
//   int n = 4;
//   func(1,n);
//   return 0;
// }





// ****************************************************************************************************************************************************************************************************************************************

// ********************PRINT N TO 1 USING RECURSION****************************************************


#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i<n) return;
   cout<<i<<endl;

   // Function call to print i till i decrements to n.
   func(i-1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 1
  int n = 1;
  func(4,n);
  return 0;
}















