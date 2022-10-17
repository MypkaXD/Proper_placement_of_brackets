#include <iostream>
#include <stack>

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "rus");

	std::stack <char> steck;

	for (int count = 0; argv[1][count] != '\0'; count++) {
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
				std::cout << "FALSE";
				exit(0);
			}
			steck.pop();
		default:
			break;
		}
	}
	if (steck.empty())
		std::cout << "TRUE";
	else
		std::cout << "FALSE";

	return 0;
}