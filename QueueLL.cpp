#include<iostream>
using namespace std;

//create the node type class
class node
{       
    public:
    int data;
    node*next;
    node(int val)
   {
       data=val;
       next=NULL;
  }
};

//create the queue class
class queue
{
        public:
        node*front;
        queue()
        {
          front=NULL;
        }

//add new elements
void enqueue(int val)
{
        node*temp=new node(val);
        
        if(front==NULL)
        {
           front=temp;     
        }
        else
         temp->next=front;
         front=temp;
}

//delete
void dequeue()
{
  if(front==NULL)
     {
        cout<<"the queue is empty"<<endl;
     }
    else
      {
         node*temp=front;
         front=front->next;
         delete temp;
       }
}

//display
void display()
{ 
        node*current=front;
        while(current->next!=NULL)
        {
          cout<<current->data<<"->";
          current=current->next;
        }
  cout<<endl;
}
void isempty()
{
        if (front==NULL)
        {
         cout<<"Empty queue";
        }
        else 
        {
        cout<<"Queue has elements.";
        }
        cout<<endl;
}

//size
void count_items()
{
        int i=0;
        node*current=front;
        while(current!=NULL)
        {
                i++;
                current=current->next;
        }
        cout<<"The no elements in queue is :  "<<i<<endl;
}
};
int main ()
{
        queue q1;
        for(int i=1;i<=10;i++)
        {
                q1.enqueue(i);
        }
        q1.display();
        q1.isempty();
        q1.count_items();
        q1.dequeue();
        q1.display();
        q1.count_items();
        q1.enqueue(1);
        q1.display();
        q1.count_items();
        return 0;
}






