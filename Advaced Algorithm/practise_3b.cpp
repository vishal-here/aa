#include<bits/stdc++.h>
using namespace std ; 

int main() {
     string T , P ;
    cout << "enter a text :  " ;
    cin >> T ;
    cout << "enter a pattern to search : ";
    cin>> P ; 
    int match =0 ; 
    int m = P.length(); 
    int n = T.length() ; 
    int j = 0 ;
    int iterations = 0 ;
    while(j < n-m+1){
    int c=0 ; 
    for(int i =0 ; i < m ; i++){
            iterations++ ;
        if(P[i] == T[j+i]) 
        {
            c++ ; 
        }
        else  break ;
    }
    if(c) {
   if(c==m) cout << "\nPattern found at index : " << j ; 
   j += c-1 ;
    }
    j++ ;
    }
    cout << "\nn = " << n << ", m = " << m ;
cout << "\nTotal iterations : (n-m+1)  " << iterations; 
    return 0 ; 
}