#include<iostream>
#include<string>
#include<sstream>

std::string PRINT(std::string input) {return input;}
std::string READ(std::string input) { return input;}
std::string EVAL(std::string input) { return input;}

std::string rep(std::string input) {
	auto ast = READ(input);
	auto result = EVAL(ast);
	return PRINT(result);
}
int main() {
	std::string input;
	for (;;) {
		std::cout << ">>";
		if (!std::getline(std::cin, input)) {
			break;
		}
		std::cout << rep(input) << '\n';
	} return 0;
}