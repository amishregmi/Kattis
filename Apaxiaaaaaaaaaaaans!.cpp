#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin>>input;
    int length=input.length();
    string out;
    
    out=input[0];
    int count=1;
    
    for (int i = 1; i<length; i++){
        
        if (input[i]!= out[count-1]) {
            out+=input[i];
            count++;
        }
    }
    cout<<out;
}