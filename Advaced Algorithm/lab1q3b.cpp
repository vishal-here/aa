// string matching after modifiying  Naive Algorithm

#include<iostream>
using namespace std ;

int main(){
    string T , P ;
    cout << "enter a text :  " ;
    cin >> T ;
    cout << "enter a pattern to search : " ;
    cin>> P ; 
    int n = T.length() ;
    int m = P.length() ;
    int numberOfIterations =0 ; // to check efficiency 
    //search starts
   int count = 0 ;
    cout << "Pattern matches at index : " ;
    int i=0 ;
    while( i<= n-m){
          int c =0 ;
        for(int j=0 ; j< m ; j++){
            numberOfIterations++ ;
            if(P[j]==T[i+j]) c++ ;
            else break ;
        }
        if (c==m) {
            cout << i << " " ;
            count++ ;
            i = i+m ;
        }
        else i++ ;
    }
    cout << "\nTotal matches : " << count ;
    cout << "\n n = "<< n << " m = "<< m ;
    cout << "\nTotal iterations : " << numberOfIterations ;
}