#include <iostream>
#include <vector>

class inf {
private:
	int number, counter_of_div;
	void quantity() {
		counter_of_div = 0;
		int n1 = number + 1;
		for (int i = 1; i < n1; ++i)
			if (number % i == 0)
				++counter_of_div;
	}
public:
	inf() : number(0), counter_of_div(0) {};
	inf(int a) : number(a), counter_of_div(0) {
		quantity();
	}
	void unput(int a) {
		quantity();
	}
	int get_num() { return number; }
	int get_quan() { return counter_of_div; }
	void operator=(const inf& a) {
		this->number = a.number;
		this->counter_of_div = a.counter_of_div;
	}
};

int main() {
	inf max;
	for (int i = 120115; i < 120201; ++i) {
		inf a(i);
		if (a.get_quan() > max.get_quan())
			max = a;
	}
	std::cout << max.get_quan() << ' ' << max.get_num();
}