#include <iostream>
using namespace std;

int main() {

    int num=5,no=1;
   
    for(int i=1;i<=num;i++){
        for(int k=num;k>i;k--){
            cout<<" ";
        }
           char ch='A';  
        for(int j=1;j<=no;j++){
            cout<<ch;
            ch++;
        }
        no=no+2;
        cout<<endl;
    }
}