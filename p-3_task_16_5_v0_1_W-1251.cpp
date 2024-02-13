#include <iostream>
//~ #include <Windows.h>  //Увы, будет работать только под Windows
/*V etoy stroke koda ispol'zuyetsya pobitovyy operator AND 
dlya vypolneniya pobitovoy operatsii AND nad peremennoy "number" s chislami 8, 4, 2 i 1. 
V kontekste dvoichnykh chisel pobitovyy operator AND sravnivayet kazhdyy bit pervogo operanda s sootvetstvuyushchim bitom vtorogo operanda. 
Yesli oba bita ravny 1, sootvetstvuyushchiy bit rezul'tata ustanavlivayetsya ravnym 1. 
V protivnom sluchaye on ustanavlivayetsya ravnym 0. 
Itak, v etom kode on vyvedet rezul'tat vypolneniya pobitovoy operatsii I nad "chislom" s posledovatel'nost'yu 8, 4, 2 i 1. 
Vykhodnyye dannyye budut predstavlyat' pobitovyy rezul'tat operatsii.
	*/
void binary_output(int number) {
	std::cout << '\n' + std::string(10, '-') + '\n';
	std::cout << "2^3 2^2 2^1 2^0 \n";
	std::cout << (number & 8) << "  " << (number & 4) << "  " << (number & 2)
		<< "  " << (number & 1);
	std::cout << '\n' + std::string(10, '-') + '\n';
}

void and_function(int a, int b) {
	int result = a & b;
	std::cout << " a = " << a;
	binary_output(a);
	std::cout << " b = " << b;
	binary_output(b);
	std::cout << " a & b = " << result;
	binary_output(result);
}

void or_function(int a, int b) {
	int result = a | b;
	std::cout << " a = " << a;
	binary_output(a);
	std::cout << " b = " << b;
	binary_output(b);
	std::cout << " a | b = " << result;
	binary_output(result);
}

void xor_function(int a, int b) {
	int result = a ^ b;
	std::cout << " a = " << a;
	binary_output(a);
	std::cout << " b = " << b;
	binary_output(b);
	std::cout << " a ^ b = " << result;
	binary_output(result);
}

void not_function(int a) {
	int result = ~a;
	std::cout << " a = " << a;
	binary_output(a);
	std::cout << " ~a = " << result;
	binary_output(result);
}
int main() {
	setlocale(LC_ALL, "Rus");
	//~ setlocale(LC_ALL, "C");
	//~ SetConsoleCP(1251); // Корректный ввод кириллицы
	//~ SetConsoleOutputCP(1251); //Корректный вывод кириллицы
	std::cout << "***************** Программа '16.5 Работа с перечислениями' *****************" << std::endl;
	std::cout << "***************** 'Пример 3. Пример использования всех четырёх базовых функций v0.1 W-1251' *****************" << std::endl;
	{
		std::cout << "\tAnd\t\n";
		int a = 5;
		int b = 15;
		and_function(a, b);
	}
	{
		std::cout << "\tOr\t\n";
		int a = 5;
		int b = 15;
		or_function(a, b);
	}
	{
		std::cout << "\tXor\t\n";
		int a = 5;
		int b = 15;
		xor_function(a, b);
	}
	{
		std::cout << "\tNot\t\n";
		int a = 5;
		not_function(a);
	}
	std::cout << "\nКонец программы. Возвращайтесь :) \n";
	return 0;
}
