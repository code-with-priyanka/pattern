#include<iostream>
using namespace std;

int main() {
    int num=5,no=1,number=2;
    
    for(int i=1;i<=num;i++)
    {
        
        for(int k=num;k>i;k--){
            cout<<" ";
        }
        
        for(int j=1;j<=i;j++)
        {  
            
            cout<<no;
            no++;
            
        }
        no=i+1;
        if(i>1){
        for(int m=2;m<=i;m++)
        {
            cout<<number;
            number--;
        }
        number=i*2;
        }
        cout<<endl;
        
    
    }
}