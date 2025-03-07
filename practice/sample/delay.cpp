#include <iostream>
#include "unistd.h"

using namespace std;

class Timer {
	private:
		unsigned int timer =0;
	
	public:
		Timer() {};
		Timer(unsigned int val) : timer(val) {}
		Timer& operator=(unsigned int val) 
		{
			this->timer = val;
			return *this;
		}
		
		void delay() {
			if (timer != 0) {
				sleep(timer);
			}
			else {
				cout << "Error! no timer found\n" << endl;
			}
		}

		void delay(unsigned int val) {
			sleep(val);
		}
};

int main() {
	Timer t1;
	Timer t2 = 2;
	Timer t3(3);

	for (int i=0; i<=2; i++) {
		t1.delay(1);
		cout << "\n printing with delay 1s" << endl;
	}

	for (int i=0; i<=2; i++) {
		t2.delay();
		cout << "\n printing with delay 2s" << endl;
	}
	
	
	for (int i=0; i<=2; i++) {
		t3.delay();
		cout << "\n printing with delay 3s" << endl;
	}

	return 0;
}
