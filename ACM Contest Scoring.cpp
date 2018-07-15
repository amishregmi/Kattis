#include<iostream>
#include<string>
#define MAXSIZE 100
using namespace std;
int main(){
    int input;
    char input1;
    string input2;
    int count =0; //Line of input and for array index; 
    int timeinput[MAXSIZE];
    char question[MAXSIZE]; //For input of the question the user is attempting.
    string rightorwrongrecord[MAXSIZE]; 
    string string1= "right";
    string string2="wrong";
    
    do {
        cin>>input;
        if (input ==-1) break;
        cin>>input1>>input2;
        timeinput[count] = input;
        question[count] = input1;
        rightorwrongrecord[count] = input2;
        count++;
    } while (input!=-1);
    
    int numberofright = 0;
    int wrongbeforeright =0;
    int recordtimeofright;
    int totalscore=0;
    int numberofquestionssolve=0;
    char check;
    int righttime=0;
    for (int i=0; i<count; i++){
        
        if (rightorwrongrecord[i] == string1) {
            recordtimeofright= timeinput[i];
            numberofquestionssolve++;
            righttime+=recordtimeofright;
            check= question[i];
            
            if (i!=0) {
                
                for (int j=i; j>=0; j--){
                    
                    if (question[j] == check && rightorwrongrecord[j] ==string2) {
                        wrongbeforeright++;
                    }
                    
                }
                
            }
            
            
        }
        
        
    }
    
    totalscore = righttime+wrongbeforeright*20;
    cout<<numberofquestionssolve<<" "<<totalscore;
    
    
    
}