#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<functional>

using namespace std;
//Template for n no of types
auto sum() {
	return 0;
}

template <typename H,typename... T>
auto sum(H h, T... t) {
	return h + sum(t...);
}

//Double return single fetch
auto sum_product(double a, double b) {
	return make_pair(a + b, a * b);
}

//New Enum
enum class Color { Red, Blue, Green };

Color r = Color::Green;

//Class
class Animal
{
protected:
	int legs = 4;
public:
	explicit Animal(int legs) : legs(legs){}

	virtual int walk(int steps){
		return steps * 20;
	}
};

class Human : public Animal {
public:
	Human() :Animal(2) {}
	//int walk(int steps)override;
};

template<typename T,typename U>
auto add(T t, U u) {
	return t + u;
}

int main()
{
	//Direct setting values
	int a{ 1 };  //int a=1;
	
	string s{ "Hani" };
	vector<int> values{ 1,2,3 };

	map <string, string> capital = {
		{ "UK","London"}
	};

	//Auto datatype
	auto b = 50;
	auto c = 54.65;
	auto d = "Hello";
	auto e = { 1,2,3 };

	auto res = b + c;
	cout << res << endl;

	map<string, vector<double>> ticks;
	auto i = ticks.begin();

	cout << add(4, 5.8) << endl;
	cout << add(string("Hello"), " World") << endl;

	//Class
	Human h;
	Human h2{ h };

	//Lambda Functions
	vector <int> scores{ 5,9,4,7 };
	
	for_each(begin(scores), end(scores), [](int n)->float {
		cout << n << endl;
			return n;
		});

	auto zero = 0;
	auto is_positive = [=](int n) {return n > 0; };
	cout << boolalpha << is_positive(-2) << endl;

	function<int(int)> fib = [&fib](int x) {return x < 2 ? 1 : fib(x - 1) + fib(x - 2);};
	cout << fib(8) << endl;

	//New way to write for loop
	vector <int> v{ 1,2,3 };

	for (int a : v) {
		cout << a * 2 << endl;
	}

	//n template check
	cout << sum(1, 2, 3, 4, 5.5) << endl;

	//Double return single fetch check
	double sum,pro;
	tie(sum, ignore) = sum_product(4, 5);
	tie(ignore, pro) = sum_product(4, 5);

	cout << "Sum is : " << sum << endl;
	cout << "Product is : " << pro << endl;

    return 0;
}
