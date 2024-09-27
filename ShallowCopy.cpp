#include <iostream>
using namespace std;


class B {
	int state;
public:
	B() {
		cout << "B Instantiated " << endl;
	}
	~B() {
		cout << "B Destructed " << endl;
	}
	void updateState(int value) { this->state = value; }
	int getState() { return this->state; }
};
class A {
		B* obj;//2
		int state;
		public:
			
public:
	
	A(B* objArg) :obj{ objArg } { cout << "A Instantiated" << endl; }
	 A() {
		cout << "A Instantiated" << endl;
	}
	 ~A() {
		 cout << "A Destructed " << endl;
	 }
	 void updateBState(int value) { this->obj->updateState(value); }
	 int getBState() { return this->obj->getState(); }

};

class C {

};
int main() {
	B dependency;//1
	A obj_a{ &dependency };
	obj_a.updateBState(100);

	A clone_a(obj_a);//Shallow clone , Copy Costructor
	clone_a.updateBState(1000);

	cout << obj_a.getBState() << endl;//100
	cout << clone_a.getBState() << endl;//1000
}
