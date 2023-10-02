// 5.3-1.cpp 


#include <iostream>
using namespace std;

class smart_array {
private:
	int* a;
	int null;
	int size;
public:
	smart_array(int s) {
		a = new int[s];
		null = 0;
		size = s;
	}
	void add_element(int num) {
		if (null >= size) throw runtime_error("array is full");
		else {
			a[null] = num;
			null++;
		}
	}
	void get_element(int i) {
		cout << "array[" << i << "] = " << a[i] << endl;
	}
	~smart_array() {
		delete[] a;
	}
};
int main() {
	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		arr.get_element(1);
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
}