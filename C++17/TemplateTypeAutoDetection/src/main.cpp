#include <iostream>

template <class T1, class T2>
class TemplateClass
{
	private:
		T1 var1;
		T2 var2;
	public:
		TemplateClass(T1 var1, T2 var2){
			this->var1 = var1;
			this->var2 = var2;
		}
		void printSizes(){
			std::cout << "Size var1: " << sizeof(var1) << " bytes --> " << var1 << std::endl;
			std::cout << "Size var2: " << sizeof(var2) << " bytes --> " << var2 << std::endl;
		}
};

int main()
{
	std::cout << std::endl << ">>>> Template Type Auto Detection <<<<" << std::endl << std::endl;
	
	TemplateClass <int, std::string> a(1, "hello");
	TemplateClass <float, std::string> b(1.5f,"j");
	TemplateClass c(89.4, 65.0f);
	
	a.printSizes();
	b.printSizes();
	c.printSizes();
	
	return 0;
}

