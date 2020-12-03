#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int FindPair() {
	ifstream file_copy_one ("nums.txt");
	string number_1, number_2;

	if (file_copy_one.is_open()) {
		while (getline( file_copy_one, number_1 )) {
			ifstream file_copy_two ("nums.txt");

			if (file_copy_two.is_open()) {
				while (getline( file_copy_two, number_2 )) {
					if (number_1 != number_2 && (stoi(number_1) + stoi(number_2)) == 2020) {
						 return stoi(number_1) * stoi(number_2);
					}

				}
			} else cout << "Unable to open file for first time" << endl;

		}
	} else cout << "Unable to open file for first time" << endl;

	return -1;
}

int main() {
	cout << FindPair() << endl;
}
