#include <iostream>
#include <memory>
#include <sstream>

//-------------------------------------------------------------------------------
class C;
//-------------------------------------------------------------------------------
class A
{
	private:
		std::weak_ptr<C> ptr;
	public:
		A(){
			std::cout << std::endl << "A Constructor" << std::endl;
		}
		
		~A(){
			std::cout << std::endl << "A Destructor" << std::endl;
		}
		
		void setObject(std::weak_ptr<C> ptr) {
			this->ptr = ptr;
		}
};
//-------------------------------------------------------------------------------
class B
{
	private:
		std::weak_ptr<C> ptr;
	public:
		B(){
			std::cout << std::endl << "B Constructor" << std::endl;
		}
		
		~B(){
			std::cout << std::endl << "B Destructor" << std::endl;
		}
		
		void setObject(std::weak_ptr<C> ptr) {
			this->ptr = ptr;
		}
};
//-------------------------------------------------------------------------------
class C
{
	private:
		std::shared_ptr<A> ptr1;
		std::shared_ptr<B> ptr2;
	public:
		C(std::shared_ptr<A> ptr1, std::shared_ptr<B> ptr2){
			std::cout << std::endl << "C Constructor" << std::endl;
			this->ptr1 = ptr1;
			this->ptr2 = ptr2;
		}
		
		~C(){
			std::cout << std::endl << "C Destructor" << std::endl;
		}
		
		/* void setObject(std::shared_ptr<C> ptr) {
			this->ptr = ptr;
		} */
};
//-------------------------------------------------------------------------------
int main()
{
	std::cout << std::endl << ">>>> Weak Pointer<<<<" << std::endl << std::endl;
	std::shared_ptr<A> a(new A());
	std::shared_ptr<B> b(new B());
	std::shared_ptr<C> c(new C(a,b));
	
	a->setObject(std::weak_ptr<C>(c));
	b->setObject(std::weak_ptr<C>(c));
	return 0;
}