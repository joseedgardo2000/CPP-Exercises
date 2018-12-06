#include <iostream>
#include <stack>
#include <queue>
#include <iterator>
#include <algorithm>

void stackDemo();
void queueDemo();
void priorityQueueDemo();

int main()
{
	std::cout << std::endl << ">>>> Container Adapter <<<<" << std::endl << std::endl;
	stackDemo();
	queueDemo();
	priorityQueueDemo();
	return 0;
}

void priorityQueueDemo()
{
	std::cout << std::endl << "----------- priorityQueueDemo -----------" << std::endl<< std::endl;
	
	std::priority_queue<int> q;
	
	q.push(100);
	q.push(50);
	q.push(1000);
	q.push(800);
	q.push(300);
	
	std::cout << "Priority Values are: " << std::endl;
	
	while(!q.empty())
	{
		std::cout << "Value: " << q.top() << "\n";
		q.pop();
	}
	
}

void queueDemo()
{
	std::cout << "----------- queueDemo -----------" << std::endl<< std::endl;
	std::queue<std::string> tortillasQueue;
	
	tortillasQueue.push("Pancho");
	tortillasQueue.push("Patita");
	tortillasQueue.push("Nano");
	tortillasQueue.push("Licha");
	
	while(!tortillasQueue.empty())
	{
		std::cout << "Person: " << tortillasQueue.front() << std::endl;
		tortillasQueue.pop();
	}
}

void stackDemo()
{
	std::cout << "----------- stackDemo -----------" << std::endl<< std::endl;
	
	std::stack<std::string> languages;
	
	languages.push("French");
	languages.push("Vietnamese");
	languages.push("Chinese");
	languages.push("Japanese");
	languages.push("Tagalo");
	
	while(!languages.empty())
	{
		std::cout << "Languaje: " << languages.top() << std::endl;
		languages.pop();
	}
	
}