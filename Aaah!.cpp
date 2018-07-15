#include<iostream>
#include<string> 
using namespace std;

int main(){
    string a,  b;
    int firstlen , secondlen;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<endl;
    
    firstlen=a.length();
    secondlen=b.length();
    
    if (firstlen<secondlen) cout<< "no" <<endl;
    else cout <<"go"<<endl;
    return 0;
    
    
    
}