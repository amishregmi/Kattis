#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int length;
    string input;
    cin>>input;
    length=input.length();
    int whitespace=0; int lower=0; int upper =0; int symbol=0;
    
    for (int i=0; i<length; i++){
        if (input[i] == '_') whitespace++;
        else if (islower(input.at(i))) lower++;
        else if (isupper(input.at(i))) upper++;
        else symbol++;
    }
    
    cout<<setprecision(20);
    cout<<(double)whitespace / length<<endl;
    cout<<(double)lower/length<<endl;
    cout<<(double)upper/length<<endl;
    cout<<(double)symbol/length<<endl;
    
}