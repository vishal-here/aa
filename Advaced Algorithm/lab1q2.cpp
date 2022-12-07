  #include<iostream>
using namespace std ;

class node{
    public:
    int data ;
    node* fptr ;
    node* sptr ;
    node(int d){
        data = d ;
        fptr = NULL ;
        sptr = NULL ;
    }
};

class list{
    public:
    node* head ;

    list(){
        head = NULL ;
    }
};

int nodeCount(list* li){
   int count=0 ;
     for(node* temp = li->head ; temp!=NULL ;temp= temp->sptr){
       count++ ;
    } 
    return count ;
}
bool isPresent(list* li , int d){
  for(node* temp = li->head ; temp!=NULL ;temp= temp->sptr){
      if(temp->data == d) return true ;
    }
    return false ;
}
void printList(list* li){
    cout << "{ " ;
    for(node* temp = li->head ; temp!=NULL ;temp= temp->sptr){
        cout << temp->data << " ";
    }
    cout << "}\n" ;
}
void fastPrintlist(list* li){
    cout << "{ " ;
    for(node* temp = li->head ; temp!=NULL ;temp= temp->fptr){
        cout << temp->data << " ";
    }
    cout << "}\n" ;
}
void insertAtEnd(list* sll , int d){
    if(!isPresent(sll,d)){
        node*  newNode = new node(d) ;
        if(sll->head == NULL){
        sll->head = newNode ;
        return ;
        }
       if(nodeCount(sll)&1){
          
        if(nodeCount(sll)!=1){
        node* temp= sll->head ;
        for(temp = sll->head ; (temp->sptr->sptr)!= NULL ; temp= temp->sptr ){;}
        temp->sptr->sptr = newNode ;
        temp->fptr =newNode ;
        }
        else{
         node* temp= sll->head ;
        for(temp = sll->head ; (temp->sptr)!= NULL ; temp= temp->sptr ){;}
        temp->sptr = newNode ;
        }
       }
       else{
         node* temp= sll->head ;
        for(temp = sll->head ; (temp->sptr->sptr)!= NULL ; temp= temp->sptr ){;}
        temp->fptr = newNode ;
        temp->sptr->sptr = newNode ;   
       }

        }

    }

void insertAnywhere(list* sll , int element ,int x){
     if(!isPresent(sll,element)){
            cout << "\nElement does not exist in the list :(\n" ;
            return ;
        }
    for(node* temp = sll->head ; temp!=NULL ; temp= temp->sptr){
       
      if(sll->head->data != element){
          if(temp->sptr->data == element){
           node*  newNode = new node(x) ; 
           if(temp->sptr->sptr==NULL && temp->sptr->fptr ==NULL) {
            insertAtEnd(sll,x) ;
            break ;
           }
           else{
            temp->sptr->fptr = temp->sptr->sptr ;
            newNode->sptr = temp->sptr->sptr ;
            temp->sptr->sptr = newNode ;
            newNode->fptr = temp->sptr->fptr->sptr ; 
            temp->fptr = newNode ;
            break ;
          
           }
        }
      }
      else{
          if(temp->data == element){
           node*  newNode = new node(x) ; 
           if(temp->sptr==NULL && temp->fptr ==NULL) {
            insertAtEnd(sll,x) ;
            break ;
           }
           else{
            temp->fptr = temp->sptr ;
            newNode->sptr = temp->sptr ;
            temp->sptr = newNode ;
            newNode->fptr = temp->fptr->sptr ; 
            break ;
          
           }
        }
      }
    }
}
int main(){
    list* li = new list() ;
     
    insertAtEnd(li , 1) ;
    insertAnywhere(li,1,59) ;
    insertAnywhere(li,59,100) ;
    insertAnywhere(li,59,99) ;
    insertAtEnd(li,101) ;
    insertAnywhere(li,1,0) ;
    insertAnywhere(li,100,-1) ;
    
    printList(li) ;
    fastPrintlist(li) ;
}