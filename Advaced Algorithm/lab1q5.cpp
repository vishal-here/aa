//KMP 


#include <iostream>
using namespace std ;

// prefix computation 
int* prefix_matcher( string P ){
    int m = P.length() ;
    int* pi ;
    pi[0]= -1 ;
    pi[1]=0 ;
    int k =0 ;
    for(int q = 2 ; q <= m ; q++ ){
        while( k>0 && (P[k+1] != P[q])){
            k = pi[k] ;
            }
             if( P[k+1]== P[q]){
                k++ ;
        }
             pi[q] = k ;
    } 
    // for(int i =1 ; i< P.length() ; i++){
    //     cout << pi[i] << " " ;
    // }
    return pi  ;
}


int main(){
    string  T , P ;
    cout << "enter Text : " ;
    cin >> T  ;
    cout << "enter Pattern : " ;
    cin >> P ;

    int* a = prefix_matcher( '#' + P ) ;
    for(int i = 1 ; i<= P.length(); i++){
        cout << a[i] << " " ;
    }
    T = '#' + T ;
    P = '#' + P ;
    int n = T.length() ;
    int m = P.length() ;
    // cout << T << P ;
    int q = 0 ;
    for(int i =1 ; i <= n ; i++ ){
        while(q>0 && P[q+1] != T[i]){
            q = a[q] ;

        }
        if(P[q+1]== T[i]) q++ ;
       // cout << q  << "\n";
        if(q== m-1) {
            cout << "\nPattern occurs after shifts = " << i-m+1 ;
            q = a[q] ;
        }
    }



}