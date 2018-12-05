#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>

void function01()
{
	std::cout << "----- function01 -----" << std::endl;
	std::set<int> s1 = {1, 7, 5, 2, 9};
	std::set<int> s2 = {10,3, 8, 11, 1};
	std::vector<int> v (s1.size() + s2.size());
	
	std::cout << std::endl << "Set01: " << std::endl; 
	copy(s1.begin(), s1.end(), std::ostream_iterator<int>(std::cout, "\t"));
	
	std::cout << std::endl << std::endl << "Set02: " << std::endl; 
	copy(s2.begin(), s2.end(), std::ostream_iterator<int>(std::cout, "\t"));
	
	auto pos = std::set_difference( s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin() );
	
	std::cout << std::endl ;
	
	v.resize(pos - v.begin());
	
	std::cout << std::endl << "Values present in the first set but not in the second: " << std::endl ;
	copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\t"));
	
	v.clear();
	
	v.resize(s1.size() + s2.size());
	
	pos = std::set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin());
	v.resize(pos - v.begin());
	
	std::cout << std::endl << "Merged values: " << std::endl ;
	copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\t"));
	std::cout << std::endl;
}

int main()
{
	std::cout << ">>>> Set Test <<<<" << std::endl;
	function01();
	return 0;
}