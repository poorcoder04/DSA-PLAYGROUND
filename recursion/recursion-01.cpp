#include<bits/stdc++.h>
using namespace std;

void name(int i){
    if(i==0){
        return;
    }
    cout<<"Rakibul Hassan"<<endl;
    name(i-1);
}
int main(){
    int num;
    cin>>num;
    name(num);
    return 0;
}