#include <iostream>
using namespace std;

class Base {
	public:
		virtual void hello(){
			cout <<"hello from base class\n";
		}
};

class Derived : public Base{
	public:

		void hello() override {

		cout <<"hello from derived class\n";
		} 
};

int main() {
	Derived obj;
	
	obj.hello();
	
}
