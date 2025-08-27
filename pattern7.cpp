#include <iostream>
using namespace std;
int main(){
    int num=5,k;
    for(int i=1;i<=num;i++){
        k=num;
        for(int j=1;j<=i;j++){
            cout<<k;
            k--;
        }
        cout<<endl;
    }
}
