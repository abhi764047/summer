#include <iostream>
using namespace std;
class StackArr{
public:
        //array declaration
	int arr[20];
	int top=0;
        // add elements to stack		
	void push(int value)
		{
		    //condition for pushing the elements to the end of array
			arr[top]=value;
			top++;
		}
	//delete elements from stack 	
	void pop()
		{
		    //condition for deleting last element of array
			arr[top-1]=0;
			top--;
		}
	//show the elements in the stack	
	void display()
		{
			for(int i=0;i<top;i++)
			{
				cout<<arr[i]<<",";
			}
			
			cout<<endl;
		}
	//validation of the elements	
	bool isEmpty()
		{
			if(top==0) return true;
			else return false;
		}
	//	
	int count_Items()
		{
			int j=0;
			for(int i=0;i<top;i++)
			{
				j++;
			}
			return j;
		}
};

int main()
{
	StackArr s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.display();
	s1.pop();
	s1.pop();
	s1.display();
	cout<<"The no of elements in the stack is: "<<s1.count_Items()<<endl;
	return 0;
}

