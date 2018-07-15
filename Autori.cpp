#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin>>input;
    int i=0;
    string out;
    out+=input[i];
    
    for (i=1; i<input.length();i++){
        if (input[i]=='-') out+=input[i+1];
    }
    cout<<out;
}