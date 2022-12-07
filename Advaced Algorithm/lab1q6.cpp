#include<bits/stdc++.h>
using namespace std ;

//prefix calculator 
vector<vector<int> transitionTableCalculator(string P){
    int m = P.length() ;
    set<char> sigma ;
    for(int i=0 ; i<m ; i++){
        sigma.insert(P[i]) ;
    }
    int k =0 ;
    vector<vector<int>> ans ;
    for(int q = 0 ; q<= m ; q++){
    vector<int> states;
        for(int x=0 ; x<sigma.size() ; x++){
           k = min(m+1, q+2)  ;
             while(1){
             k-- ;
            if( ){
               break; 
            }
        }
        states.push_back(k) ;
        states.clear()
        }
      ans.push_back(states) ;
    }
   
}

void main (){
    string T , P;
    cout << "enter Text : " ;
    cin >> T; 
    
    cout << "enter Pattern : " ;
    cin >> P; 
    int n = T.length() ;
    int m = P.length() ;
    vector<vector<int> sigmaTable = transitionTableCalculator(P) ;
    int q =0 ;
    for(int i = 0 ; i< n ; i++){
      q = sigmaTable[T[i] - 97][q] ;
      if(q==m) cout << "pattern occurs with shift " << i-m ; 
    }
}