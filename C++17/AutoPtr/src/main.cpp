#include <iostream>
#include <memory>
#include <sstream>

// -----------------------------------------------------------------
class MyClass
{
	private:
		static int count;
		std::string name;
	public:
		MyClass(){
			std::ostringstream stringStream(std::ostringstream::ate);
			stringStream << "Object[" << ++count << "]";
			name = stringStream.str();
			std::cout << std::endl << "Constructor -> Class Name: " << name << std::endl;
		}
		
		MyClass(const MyClass &objectBeingCopied){
			std::cout << std::endl << "MyClass copy constructor" << std::endl; 
		}
		
		~MyClass(){
			std::cout << std::endl << "Destructor -> Class Name: " << name << std::endl;
		}
		
		/* MyClass& operator=(const MyClass &objectBeingAssigned)
		{
			std::cout << std::endl << "MyClass assignment operator" << std::endl;
		} */
		
		void sayHello() {
			std::cout << "Hello from MyClass" << name << std::endl;
		}
};

int MyClass::count = 0;
// -----------------------------------------------------------------

int main()
{
	std::cout << std::endl << ">>>> Auto Pointer<<<<" << std::endl << std::endl; 
	MyClass a;
	a.sayHello();
	
	std::auto_ptr<MyClass> ptr1(new MyClass());
	std::auto_ptr<MyClass> ptr2(new MyClass());
	
	ptr1->sayHello();
	ptr2->sayHello();
	
	ptr2 = ptr1;
	
	ptr2 -> sayHello();
	
	return 0;
}