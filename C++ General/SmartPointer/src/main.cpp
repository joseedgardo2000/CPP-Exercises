/*
 * main.cpp
 *
 *  Created on: 28/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <memory>

class Displayer{
private:
	std::string m1;
	std::string m2;
public:
	Displayer(std::string a, std::string b){
		m1 = a;
		m2 = b;
	}

	~Displayer()
	{
		std::cout << "Displayer destroyed" << std::endl;
	}

	void displayM1() {
		std::cout << "M1: " << m1 << std::endl;
	}

	void displayM2() {
		std::cout << "M2: " << m2 << std::endl;
	}
};

void normalPointer();
void smartPointer();
void runPointer(char p, int n);

int main()
{
	std::cout << ">>>> SmartPointer <<<<" <<std::endl;
	Displayer d("hola", "mundo");
	d.displayM1();
	d.displayM2();
	runPointer('n', 5);
	runPointer('s', 5);
	return 0;
}

void runPointer(char p, int n)
{
	for(int i = 1; i <= n; i++){
		if(p=='n')
		{
			normalPointer();
		}
		else if (p=='s')
		{
			smartPointer();
		}
	}
}

void smartPointer()
{
	std::unique_ptr<Displayer> pDisplayer(new Displayer("smart","pointer"));
	pDisplayer->displayM1();
	pDisplayer->displayM2();
}

void normalPointer()
{
	Displayer* p;
	p = new Displayer("mensajeA", "mensajeB");
	p->displayM1();
	p->displayM2();
	delete p;
}
