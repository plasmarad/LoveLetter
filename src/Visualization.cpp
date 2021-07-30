#include <iostream>
#include <vector>
#include <map>
#include <string>

std::map<char, int> alphabet = {
	{'a',  1},{'b',  2},{'c',  3},{'d',  4},
	{'e',  5},{'f',  6},{'g',  7},{'h',  8},
	{'i',  9},{'j', 10},{'k', 11},{'l', 12},
	{'m', 13},{'n', 14},{'o', 15},{'p', 16},
	{'q', 17},{'r', 18},{'s', 19},{'t', 20},
	{'u', 21},{'v', 22},{'w', 23},{'x', 24},
	{'y', 25},{'z', 26} };

int findforSecond(std::map<char, int>& Map, char first)
{
	bool missing = true;

	for (auto& map : Map) {

		if (map.first == first) {
			missing = false;
			return map.second;
		}

		
	}
	if (missing) {
		return -1;
	}
};

char findforfirst(std::map<char, int>& Map, int second) {
	bool missing = true;

	for (auto& map : Map) {
		if (map.second == second) {
			missing = false;
			return map.first;
		}
	}

	if (missing) {
		return ' ';
	}
}



/*std::vector<int> encrypt*/ 
int main (int argc, char** argv) { //todo: Make the main function into a std::vector?
	
	std::map<char, int> values;
	std::string keyword = argv[1];
	std::string Msg;
	// std::vector<int> returnVal;
	values.insert(std::pair<char, int>(' ', 0)); // white spaces return 0

	for (int i = 0; i < keyword.length(); i++) {
		values.insert(std::pair<char, int>(argv[1][i], i+1));
	}
	std::cout << "Inputted token: " << argv[1] << std::endl << "Bellow will be the mapped Keyword to Message" << std::endl;


	if (argv[2] != NULL) {

		Msg = argv[2];
		int i = 0;
		for (const char cstrArr : Msg) {
			if (findforSecond(values, cstrArr) != -1) {
				std::cout << " [ " << findforSecond(values, argv[1][i]) << " : " << argv[1][i] << " ] : ( " << findforSecond(values, cstrArr) << " : " << cstrArr << " ) " << std::endl;
			}
			if (findforSecond(values, cstrArr) == -1) {
				std::cout << " [ "  << findforSecond(values, argv[1][i]) << " : " << argv[1][i] << " ] : ( " << '#'<<findforSecond(alphabet, cstrArr) << " : " << cstrArr << " ) " << std::endl;
			}
			i += 1; 
			
		}
	}
}


