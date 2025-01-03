
            //   infinite recursive call OR Stack overflow


//here this is the code there is not mention any (base condition) means the condition which terminate the recursive call



// #include<bits/stdc++.h>
// using namespace std;
// void print(){
//     cout<<1<<endl;
//     print();
// }

// int main(){
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // #endif

//     print();

//     return 0;
// }




// ****************************************************************************************************************************************************************
// base condition ---> which terminate the recurcive call 

#include<bits/stdc++.h>
using namespace std;
int cnt  =  0;
void print() {
    if(cnt == 3) //base condition
    return;        //if we have have mention return overhere means that after fullfilling the condition the recursive calls to be terminated not to be further call
    cout<<cnt<<endl;
    cnt++;
    print();
}

int main(){

    print();   //here we call the recursive function inside the main
    
    return 0;
}


























