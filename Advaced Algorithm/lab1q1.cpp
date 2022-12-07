#include<iostream>
using namespace std ;

class node{
   public :
   node* prev ;
   int data ; 
   node* next ;

   node(int d){
      prev = NULL ;
      data = d ;
      next = NULL ;
   }
};
class dl{
   public:
   node* head ;
   node* tail ;
   dl(){
      head = NULL ;
      tail = NULL ;
   }
};

 bool isPresent(node*head , int d){
   for(node* temp= head ; temp!= NULL ; temp= temp->next){
      if(temp->data == d) return true ;
   }
   return false ;
 }

void insertInList( dl* newList  , int d){
  if(!isPresent(newList->head, d)){
      node* temp = new node(d) ;
  if(newList->head == NULL || newList->tail == NULL) {
   newList->head = temp ;
   newList->tail = temp ;
  }
  else {
   if(newList->tail->data < d){
         temp->prev = newList->tail ;
         newList->tail->next = temp ;
         newList->tail = temp ;

   }
   else if(newList->head->data > d){
         temp->next = newList->head ;
         newList->head->prev = temp ;
         newList->head = temp ;
   }
   else{
      node* ptr = newList->tail ;
        for(ptr ; ptr!=NULL ; ptr= ptr->prev){
      if(ptr->data < d){
         node* nptr = ptr->next ;
         ptr->next = temp ;
         temp->prev = ptr ;
         nptr->prev = temp ;
         temp->next = nptr ;
         break ;
      }
   }
   }
 
  }
  }
}
 
 void printlist(node* head  ){
   cout << "--{" ;
   for(node* temp = head ; temp!=NULL ; temp = temp->next)cout <<  temp->data << " " ;
   cout << "}--" ;
 }

void popHead(dl* list ){
 //  cout << list->head->data << " " ;
    
    node* temp = list->head ;
    list->head = list->head->next ;
    list->head->prev = NULL ;
    delete temp ;   

}

void ugly(int n , dl* list){
 int i =0 ;
   while(n--){
      i = list->head->data ;
      cout << i << " " ;
      insertInList(list , i*2) ;   
      insertInList(list , i*3) ;
      insertInList(list , i*5) ;
      popHead(list) ;
   }
}

int main(int argc, char const *argv[])
{
    dl* newlist = new dl() ; 
   int n ; 
   cout << "Enter n : " ;
   cin >> n ;
   insertInList(newlist,1) ;  
    ugly(n,newlist) ; 
    return 0;
}
