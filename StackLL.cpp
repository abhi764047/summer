#include<iostream>
using namespace std;

//create the node type class 
class node
{  
    public:
    int data ;
    node*next;
    node(int val)
  {
     data=val;
     next=NULL;
   }
};

//create the stack class 
class stack
{
    public:
    node*top;
    stack()
        {
             top=NULL; 
        }
        
//add elements to the front
void push (int val)
{
    node*temp=new node(val);
    
    if (top==NULL)
    {
        top=temp;
        
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}

//delete
void pop()
{
    if(top==NULL)
     {
        cout<<"the stack is empty"<<endl;
     }
    else
      {
         node*temp=top;
         top=top->next;
         delete temp;
       }
}
 
//display
void display()
{
    node *current=top;
    while (current->next!=NULL)
    {
        cout <<current->data<<"->";
        current=current->next;
    }
}

//size
void count_items ()
{
    node*current=top;
    int i=0;
    while (current->next!=NULL)
    {
    i++;
    current=current->next;
    }
    cout << "number of elemenets in the stack : "<<i<<endl;
} 

//top
void topp()
{
    cout <<"The top element is : "<<top->data<<endl;
}
void isempty()
{
    node *current=top;
    if (current==NULL)
    {
        cout<<"Empty stack"<<endl;
    }
    else
    cout<<"It has element.";
    cout <<endl;
}
};
int main ()
{
    stack s1;
    
    for (int i=1;i<5;i++)
    {
        s1.push(i);
    }
    s1.display();
    s1.count_items();
    s1.topp();
    s1.isempty();
    s1.pop();
    s1.display();
    s1.push(5);
    s1.display();
    s1.count_items();
    return 0;
}

