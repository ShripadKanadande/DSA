//QUEUE
#include<iostream>
using namespace std;
#define MAX 5

class Queue
{
	int data[MAX];
	int front,rear;
	public:
		Queue()
		{
			front = -1;
			rear = -1;
		}
		int empty()
		{
			if(front == -1)
			{
				return 1;
			}
			return 0;
		}
		int full()
		{
			if(rear == MAX-1)
			{
				return 1;
			}
			return 0;
		}
		void enqueue(int x)
		{
			if(!full())
			{
				if(empty())
				{
					front = 0;
					rear = 0;
				}
				else
				{
					rear++;
				}
				data[rear] = x;
			}
			else
			{
				cout<<"Stack full!"<<endl;
			}
		}
		int dequeue()	
		{
			if(!empty())
			{
				int x;
				x = data[front];
				front++;
				return x;
			}
			cout<<"Stack Empty!";
		}
		void show()
		{
			int i;
			for(i=front;i<=rear;i++)
			{
				cout<<data[i]<<endl;
			}
		}
};

int main()
{
	Queue Q;
	cout<<Q.empty()<<" "<<Q.full()<<endl;
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.show();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	cout<<"After dequeue : "<<endl;
	Q.show();
}





