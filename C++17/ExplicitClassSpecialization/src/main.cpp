#include <iostream>
#include <deque>
#include <bitset>
#include <algorithm>
#include <iterator>

//-----------------------------------------------------
template <class T>
class DynamicArray{
	private:
		std::deque<T> dynamicArray;
		typename std::deque<T>::iterator pos;
	public:
		DynamicArray() {initialize();}
		~DynamicArray() {}
		void initialize(){
			pos = dynamicArray.begin();
		}
		
		void appendValue(T element) {
			dynamicArray.push_back(element);
		}
		
		bool hasNextValue(){
			return (pos != dynamicArray.end());
		}
		
		T getValue() {
			return *pos++;
		}
		
		void display(){
			std::copy(
				dynamicArray.begin(), 
				dynamicArray.end(), 
				std::ostream_iterator<T>(std::cout, "\t"));
			std::cout << std::endl;
		}
};
//-----------------------------------------------------
template <>
class DynamicArray<bool>
{
	private:
		std::deque<std::bitset<8>*> dynamicArray;
		std::bitset<8> oneByte;
		typename std::deque<std::bitset<8>*>::iterator pos;
		int bitSetIndex;
		
		int getDequeIndex(){
			return (bitSetIndex)?(bitSetIndex/8):0;
		}
	public:
		DynamicArray(){}
};
//-----------------------------------------------------
int main()
{
	std::cout << std::endl << ">>>> Explicit Class Specialization <<<<" << std::endl << std::endl;
	
	DynamicArray <int> a;

	a.appendValue(100);
	a.appendValue(400);
	a.appendValue(300);
	a.appendValue(200);
	
	a.display();
	
	DynamicArray <char> b;

	b.appendValue('L');
	b.appendValue('I');
	b.appendValue('N');
	b.appendValue('E');
	
	b.display();
	
	return 0;
}


