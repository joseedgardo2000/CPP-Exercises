#include <iostream>
#include <forward_list>
#include <iterator>
#include <algorithm>

void basicForwardList();
void mergeForwarLists();

int main()
{
	std::cout << std::endl << ">>>> ForwardList Test <<<<" << std::endl << std::endl;
	basicForwardList();
	mergeForwarLists();
	return 0;
}

void mergeForwarLists()
{
	std::forward_list l1 = {1,3,7,4,4,8};
	std::forward_list l2 = {10,36,70,40,40,85};
	
	std::cout << std::endl << "------ mergeForwardList ------" << std::endl;
	
	copy(l1.begin(), l1.end(), std::ostream_iterator<int>(std::cout, "\t")); std::cout << std::endl;
	copy(l2.begin(), l2.end(), std::ostream_iterator<int>(std::cout, "\t")); std::cout << std::endl;
	
	l1.sort();
	l2.sort();
	
	copy(l1.begin(), l1.end(), std::ostream_iterator<int>(std::cout, "\t")); std::cout << std::endl;
	copy(l2.begin(), l2.end(), std::ostream_iterator<int>(std::cout, "\t")); std::cout << std::endl;
	
	l1.merge(l2);
	
	copy(l1.begin(), l1.end(), std::ostream_iterator<int>(std::cout, "\t")); std::cout << std::endl;
	
	l1.unique();
	
	copy(l1.begin(), l1.end(), std::ostream_iterator<int>(std::cout, "\t")); std::cout << std::endl;
}

void basicForwardList()
{
	std::cout << "------ basicForwardList ------" << std::endl;
	
	std::forward_list<int> l = {10,10,40,50,50,60};
	
	for(int e:l)
	{
		std::cout << "value: " << e << std::endl;
	}
	
	std::cout << "Size with duplicates: " << distance(l.begin(), l.end()) << std::endl;
	l.unique();
	std::cout << "Size without duplicates: " << distance(l.begin(), l.end()) << std::endl;
	copy(l.begin(),l.end(), std::ostream_iterator<int>(std::cout, "\t"));
}