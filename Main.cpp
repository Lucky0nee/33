#include <iostream>
using namespace std;
//===========================================================================================
struct Struct{
	double цілочисельнийЧисельник;
	double цілочисельнийЗнаменник;
};
double multiply(Struct num1, Struct num2) {
	return (num1.цілочисельнийЧисельник / num1.цілочисельнийЗнаменник) * (num2.цілочисельнийЧисельник / num2.цілочисельнийЗнаменник);
}

int main() {
	cout << "Результат: " << multiply({ 1,2 }, { 1,4 });

	return 0;
}
