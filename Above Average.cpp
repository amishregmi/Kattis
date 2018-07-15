#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int numberoftestcases;
    cin>>numberoftestcases;
    double averagesave[50];
    int forgrades[1000];
    
    for (int i=0; i<numberoftestcases; i++){
        
        int numberofstudents;
        cin>>numberofstudents;
        
        for (int k=0; k<numberofstudents; k++){
            int gradeofeachstudent;
            cin>>gradeofeachstudent;
            forgrades[k]=gradeofeachstudent;
        }
        
        int total=0;
        
        for (int k=0; k<numberofstudents; k++){
            total+=forgrades[k];
        }
        
        
        double average = total / numberofstudents;
       
        int aboveaverage;
        for (int k = 0; k<numberofstudents; k++){
            if (forgrades[k] > average) aboveaverage++;
        }
        double out;
        out = (double)aboveaverage/(double)numberofstudents;
        
        averagesave[i] =out;
        
        aboveaverage=0;
        
    }
    
   for (int i=0; i<numberoftestcases ; i++){
     
       cout<<setprecision(3)<<fixed;
       cout<<averagesave[i] * 100<<"%"<<endl;
   }
    
}