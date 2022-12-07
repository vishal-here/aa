#include<bits/stdc++.h>
#define d 10
using namespace std ; 

void rabinKarp( string T , string P , int q) {
    int m = P.length() ;
    int n = T.length() ;
    int h =1 ;
    int p = 0 ;
    int t =0 ; 

    for(int i = 0 ; i< m-1 ; i++){
        h = (h*d) % q ; 
    }

   for(int i = 0  ; i< m ; i++)
   {
     p = (d*p + P[i] - '0') %q ;
     t = (d*t + T[i] - '0') %q ; 
   }
}

int main () {
    string Text , Pattern ;
    int Q ; 
    cout << "enter Text : " ;
    cin >> Text ;
    cout << "enter Pattern : "
    cin >>  Pattern ;
    cout << "enter value of Q " ;
    cin >> Q


    rabinKarp( Text , Pattern , Q ) ;
    return 0 ; 
}