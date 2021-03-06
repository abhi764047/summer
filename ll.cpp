#include <iostream>
using namespace std;

class node {
    public:
    int val;
    node * next; 
    // constructor
    node(int newval)
    {val = newval;
    next = NULL;}
 };

class linkedlist{
    public:
    node * head;

    linkedlist(){
        head = NULL;
    }
    void insert(int newval){
        node * temp = new node(newval);
        temp->next = head;
        head = temp;
    }

    void display(){
        node * current = head;
        while(current != NULL){
            cout << current->val << "->";
            current = current-> next;
        }
        cout << "NULL" << endl;
    }

    int numberofItems(){
        // start at head
        node * current =  head;
        int count = 0;
        while (current != NULL){
            count++;
            current = current->next;
        }
        return count;
    }
    node * getPos(int pos){
        int cnt = 0;
        node * current = head;
        while(cnt < (pos-1)){
            current = current->next; 
            cnt++;
        }
        return current;
    }
    void insertAt(int newval, int pos){
        // Check validity of pos.
        if(pos < 1 || (pos > (numberofItems()+1))){ 
            cout << "Not a valid position" << endl;
            return;
        }

        // Reach to pos-1
        node * current = getPos(pos-1);
        
        //Links update
        if(pos==1) 
            insert(newval);
        else{
            // Create a new node
            node *temp = new node(newval);
            temp -> next = current->next;
            current -> next = temp;
        }
    }


void del()  {         //delete function
     node*temp=head;
     head = head ->next;
     delete temp;
    } 

void deleteAt(int pos)  {
    if ( (pos >= 1) && (pos <= numberofItems() ) ){
    if (pos==1) {
     }
    else {  node*temp2, *curr2;
           curr2 = head;
           int count2 = 0;
           while (count2 != (pos -1) ) {
                curr2 = curr2 -> next;
                count2++ ;
             }
       temp2 = curr2 -> next;
       curr2 -> next = temp2 -> next;
       delete temp2;
     }
   }
  else { cout << "not exist" << endl; 
   }
  }
       
    
};   
   
int main(){
    linkedlist l1;
    for(int i = 10 ; i > 0 ; i--){
        l1.insert(i);
    }
    l1.display();
    cout << "numberofItems : " << l1.numberofItems() << endl;

    //l1.insertAt(10,0);
    //l1.insertAt(10,12);
    cout << l1.getPos(10)->val << endl;
    
    l1.display();
    
  
    l1.del();
    l1.display();
    l1.deleteAt(6);
    l1.insertAt(20,1);
    l1.display();
    return 0;
    }
