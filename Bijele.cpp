/*

Bijele
Mirko has found an old chessboard and a set of pieces in his attic. Unfortunately, the set contains only white pieces, and apparently an incorrect number of them. A set of pieces should contain:

One king

One queen

Two rooks

Two bishops

Two knights

Eight pawns

Mirko would like to know how many pieces of each type he should add or remove to make a valid set.
*/


#include<iostream>
using namespace std;

int main(){
    int king, queen, rooks, bishops, knights, pawns;
    int kingcount=0; int queencount=0; int rookscount=0;int bishopscount=0; int knightscount=0; int pawnscount=0;
    cin>>king>> queen>> rooks>> bishops>> knights>> pawns;
    
    if (king!=1) {
        if (king>1) {
            
            while (king!=1) { 
                kingcount--;
                king--;   
            }
        }
        
        if (king<1) {
            while(king!=1) { kingcount++; king++; }
        }
        
    
    }
    
    if (queen!=1){
        if (queen>1) {
        while (queen!=1)  {
            queencount--;
            queen--;
        }
        }
        else {
            while(queen!=1)  {
                queencount++;
                queen++;
            }
        }
    }
    
    if (rooks!=2){
        if (rooks>2) {
        while(rooks!=2) { 
            rookscount--;
            rooks--;
        }
        }
        else {
            while(rooks!=2)  {
                rookscount++;
                rooks++;
            }
        }
    }
    
    if (bishops!=2) {
        if (bishops>2) {
        while(bishops!=2) {
            bishopscount--;
            bishops--;
        }
        }
        else {
            while(bishops!=2) {
                bishopscount++;
                bishops++;
            }
        }
    }
    
    if (knights!=2) {
        if (knights>2) {
        while(knights!=2)  {
            knightscount--;
            knights--;
        }
        }
        else {
            while(knights!=2) {
                knightscount++;
                knights++;
            }
        }
    }
    
    if (pawns!=8){
        if (pawns>8){
        while(pawns!=8)  {
            pawnscount--;
            pawns--;
        }
        }
        else {
            while(pawns!=8) {
                pawnscount++;
                pawns++;
            }
        }
    }
    
    cout<<endl;
    cout<<kingcount<<" "<<queencount<<" "<<rookscount<<" "<<bishopscount<<" " <<knightscount<<" " <<pawnscount<<endl;
}