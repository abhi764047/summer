#include <iostream>
using namespace std;

class QueueArr{
public:
    //declaring the array
      int arr[10];
      int front=0;
      int end=0;
		
    //adding elements at the end
	void enqueue(int value)
		{
			arr[end]=value;
			end++;
		}
		
     //delete elments from the front
	void dequeue()
		{
			arr[front]=0;
			front++;
		}
    //display the elements	
	void display()
		{
			for(int i=front;i<end;i++)
			{
				cout<<arr[i]<<",";
				
			}
			cout<<endl;
		}
   //validation of the elements
	bool isEmpty()
		{
			if(end==0) return true;
			else return false;
		}
   //count the elements	
	int count_Items()
		{
			int j=0;
			for(int i=front;i<end;i++)
			{
				j++;
			}
			return j;
		}
};

int main()
{
	QueueArr q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.display();
	cout<<"No of elements in queue: "<<q1.count_Items()<<endl;
	q1.dequeue();
	q1.display();
	q1.enqueue(6);
	q1.display();
	return 0;
}

