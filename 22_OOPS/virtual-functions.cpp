#include <iostream>
using namesoace std;

class Base {
	public:
		virtual void hello(){
			cout <<"hello from base class\n";
		}
};

class Derived {
	public:

		void hello() override {

		cout <<"hello from derived class\n";
		} 
};

int main() {
	Derived obj;
	
	obj.hello();
	
	return 0;
}
