#include <iostream>
//---------------------------------------------------------------------------------------------------
template <class T1, class T2, class T3>
class MyTemplateClass{
	public:
		void f1(T1 t1, T2 t2, T3 t3){
			std::cout << "\nPrimary Template Class - f1 invoked...\n\n";
			std::cout << "Value of t1 is " << t1 << std::endl;
			std::cout << "Value of t2 is " << t2 << std::endl;
			std::cout << "Value of t3 is " << t3 << std::endl;
		}
		
		void f2(T1 t1, T2 t2){
			std::cout << "\nPrimary Template Class - f2 invoked...\n\n";
			std::cout << "Value of t1 is " << t1 << std::endl;
			std::cout << "Value of 2*t2 is " << 2*t2 << std::endl;
		}
};
//---------------------------------------------------------------------------------------------------
template <class T1, class T2, class T3>
class MyTemplateClass<T1, T2*, T3*>:public MyTemplateClass <T1, T2, T3> {
	public:
		void f1(T1 t1, T2* t2, T3* t3){
			std::cout << "\nPartially Specialized Template Class - f1 invoked...\n\n";
			std::cout << "Value of t1 is " << t1 << std::endl;
			std::cout << "Value of t2 is " << *t2 << std::endl;
			std::cout << "Value of t3 is " << *t3 << std::endl;
		}
};
//---------------------------------------------------------------------------------------------------
int main()
{
	std::cout << std::endl << ">>>> Partial Template Specialization <<<<" << std::endl << std::endl;
	MyTemplateClass <int, std::string, float> a;
	a.f1(1, "uno", 1.0f);
	
	int x = 10;
	int y = 20;
	int c = 30;
	
	MyTemplateClass <int, int*, int*> b;
	b.f1(x, &y, &c);
	b.f2(x,y);
	
	return 0;
}