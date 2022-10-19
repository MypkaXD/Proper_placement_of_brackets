#include <iostream>
#include <stack>

bool checker(int argc, char* argv[]) {
	std::stack <char> steck;

	for (int count = 0; argv[1][count] != '\0'; count++) {
		if (
			argv[1][count] != '(' &&
			argv[1][count] != ')' &&
			argv[1][count] != '{' &&
			argv[1][count] != '}' &&
			argv[1][count] != '[' &&
			argv[1][count] != ']' &&
			argv[1][count] != '<' &&
			argv[1][count] != '>'
			)
			continue;
		switch (argv[1][count])
		{
		case ('('): steck.push(')'); break;
		case ('['): steck.push(']'); break;
		case ('{'): steck.push('}'); break;
		case ('<'): steck.push('>'); break;

		case (']'):
		case ('}'):
		case ('>'):
		case (')'):
			if (steck.empty() || steck.top() != argv[1][count]) {
				return false;
			}
			steck.pop();
		default:
			break;
		}
	}
	return steck.empty();
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "rus");
	
	if (argc >= 2) {//если делать такую проверку, то если придет пустая строка = ERROR: Enter arguments!
		//но функция вернет true
		if (checker(argc, argv))
			std::cout << "TRUE";
		else
			std::cout << "FALSE";
	}
	else
		std::cout << "ERROR: Enter arguments!" << std::endl;
	
	return 0;
}
