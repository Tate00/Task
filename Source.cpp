#include<iostream>
#include<stack>
#include<string>

int main() {

	std::string exp;
	std::cin >> exp;
	std::stack<char>S;
	int i = 0;
	while (exp[i]) {
		switch (exp[i]) {
		case'{':
		case'[':
		case'(':
			S.push(exp[i]);
			break;
		case'}':
			if (S.empty()) {
				std::cout << " false";
				return 0;
			}
			else if(S.top() != '{') {
				std::cout << "false";
				return 0;
			}
			else
				S.pop();
			break;
		case']':
			if (S.empty()) {
				std:: cout << "false";
				return 0;
			}
			else if(S.top() != '[') {
			    std::cout << "false";
				return 0;
			}
			else
				S.pop();
			break;
		case')':
			if (S.empty()) {
				std:: cout << "false";
				return 0;
			}
			else if(S.top() != '(') {
				std::cout << "false";
				return 0;
			}
			else
				S.pop();
			break;
		}
		i++;
	}
	if (!S.empty()) {
		std::cout << "false";
	}
	else
	{
		std:: cout << "true";

	}
	return 0;
}