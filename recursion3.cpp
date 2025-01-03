//************************************************************************************************************************************************
                     // Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.
//*************************************************************************************************************************************************
// Examples:

// Example 1:
// Input: N=5
// Output: 15
// Explanation: 1+2+3+4+5=15

// Example 2:
// Input: N=6
// Output: 21
// Explanation: 1+2+3+4+5+6=15
// Solution
// Disclaimer: Don’t jump directly to the solution, try it out yourself first.

// Solution1: Using Loop

// Intuition: We can simply add numbers one by one from 1 to N.

// For eg. if N = 5, we can add 1+2+3+4+5=15.

// We can use a for loop or while loop to achieve the goal.

// Approach: 

// Take a variable sum and initialize it as 0.
// Take a for loop and run from 1 to N.
// Save the result in sum.
// Code:

#include<bits/stdc++.h>
using namespace std;
 void solve(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
  }
 int main() {

    solve(5);
    solve(6);
  }

//*******************************************************************************************************************
// Solution 2: Using the formula

// Intuition: We can use the formula for the sum of N numbers, i.e N(N+1)/2.

// For eg: N=5

// 5(5+1)/2 = 5(6)/2 = 15.

// Approach: 

// Take a variable sum.
// Initialize it with N(N+1)/2, where N is a given number.
// Code:


  #include<bits/stdc++.h>
using namespace std;
 void solve(int N) {
    int sum = N * (N + 1) / 2;
    cout<<"The sum of the first "<<N<<" numbers is: "<<sum<<endl;
  }
 int main() {

    solve(5);
    // solve(6);
  }
  //********************************************************************************************************************************
// 1. Parameterized way

// In this approach, instead of using a global variable for calculating the sum, we pass the sum in the parameters of the-----
// function each time we add an integer to it during the function call. The sum gets incremented by an ith integer and i get decremented by 1 in each function call.------------
// At the end when i becomes less than 1, we simply return the calculated sum until that point. 

// To understand this parameterized approach better, let us have a look at the pseudocode given below:

// void func(i,sum)
// {
//    if(i<1)
//    {
//      print(sum);
//      return;
//    }

// func(i-1,sum+i);

// }

// main()
// {
//    input(n);
//    func(n,0);

// }
// We can clearly see in this pseudocode that we first call the function when the value of sum is 0 and then we increment the value of sum 
//by i (initially i is n) and decrement i by 1 inside the parameter of the function and make a call again. But, we know that this will go on forever as i will be decreasing continuously after every function call.
 //So, to avoid this we put a base condition that if i is less than 1, then simply terminate the current recursive call and return the calculated sum.

  #include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
   
   // Base Condition.
   if(i<1)
   {
       cout<<sum<<endl;
       return;
   }

   // Function call to increment sum by i till i decrements to 1.
   func(i-1,sum+i);

}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n = 3;
  func(n,0);
  return 0;

}
// ***********************************************************************************************************************************************************************************************************************************************************************************************************************
// To understand this functional approach better, let us have a look at the pseudocode given below:

// int func(n)
// {
//    if(n == 0)
//    {
//      return 0;
//    }

// return n + func(n-1);

// }

// main()
// {
//    input(n);
//    func(n);

// // }

#include<bits/stdc++.h>
using namespace std;

int func(int n){
   
   // Base Condition.
   if(n == 0)
   {
       return 0;
   }

   // Problem broken down into 2 parts and then combined.
   return n + func(n-1);

}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n = 3;
  cout<<func(n)<<endl;
  return 0;

}



// ********************************************************************************************************************************************
                            //                 FACTORIAL OF A NUMBER USING RECURSION
// ********************************************************************************************************************************************
// Solution 2: Recursive

// Recursive way of calculating the factorial of first N Numbers (functional way):

// The Factorial of a number N can be calculated by multiplying all the natural numbers till the number N. Through this approach, we can visualize the factorial of n natural numbers in the following way as shown below:

// factorial(N) = N * factorial(N-1);
// The Factorial of N natural numbers is the Nth integer multiplied by the Factorial of (N-1) natural numbers. The base case can be visualized as if n decreases to 0, then we return 1 because the factorial of 0 is 1 only. 
//Here, we’ve just broken the problem into 2 subparts and the answers of both would be multiplied together and stored in the factorial(n) function which would then be printed at last.

// To understand this functional approach better, let us have a look at the pseudocode given below:

// int factorial(n)
// {
//    if(n == 0)
//    {
//      return 1;
//    }

// return n * factorial(n-1);

// }

// main()
// {
//    input(n);
//    factorial(n);

// }

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   
   // Base Condition.
   if(n == 0)
   {
       return 1;
   }

   // Problem broken down into 2 parts and then combined.
   return n * factorial(n-1);

}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n = 3;
  cout<<factorial(n)<<endl;
  return 0;

}

//*********************************************************************************************************************************************
// Solution 1: Iterative

// Approach:

// Since the factorial of X  will be the product of the number itself and all its preceding numbers we can run loop i, from 1 to X. In every iteration current i, is multiplied with the product so far.  

// Code:

// C++

#include <iostream>
using namespace std;
int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int main() {
   int X = 5;
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
}



















