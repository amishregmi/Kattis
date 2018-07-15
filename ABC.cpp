#include<iostream>
#include<string>
using namespace std;
int main(){
    int first,second,third;
    cin>>first>>second>>third;
    string input;
    cin>>input;
    char firstchar = input[0];
    char secondchar = input[1];
    char thirdchar = input[2];
    int min , sec, last;//
    
    if (first <= second && first<=third) {
        min=first;
        if (second<third) {
            sec= second;
            last= third;   
        }
        else {
            
            sec= third;
            last=second;
        }
    }
    else if (second<=first && second<=third) {
        min = second;
        
        if (first<third) {
            sec= first;
            last= third;
        }
        
        else {
            sec=third;
            last=first;
        }
        
    }
    else  {
        
        min=third;
        
        if (first<second ){
            sec=first;
            last=second;
            
        }
        else {
            sec=second;
            last=first;
        }
        
    }
    
    if (firstchar == 'A'){
        if (secondchar== 'B') cout<<min<<" "<<sec<<" "<<last;
        else cout<<min<<" "<<last<<" "<<sec;
        
    }
    else if (firstchar == 'B') {
        if (secondchar=='A') cout<<sec<<" "<<min<<" "<<last;
        else cout<<sec<<" "<<last<<" "<<min;
    }
    
    else if (firstchar=='C') {
        if (secondchar=='A') cout<<last<<" "<<min<<" "<<sec;
        else cout<<last<<" "<<sec<<" "<<min;
    }
    
}