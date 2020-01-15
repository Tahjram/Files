	//My Files
#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main() {
	std::ifstream input_file;
	input_file.open("commaSeparatedValues.txt");
	if (input_file) {
		std::string mytext = "";
		while (getline(input_file, mytext,',')) {
			cout << mytext << endl;
		}
	}else {
		cout << "That file does not exist" << endl;
	}
	input_file.close();
	return 0;
}
