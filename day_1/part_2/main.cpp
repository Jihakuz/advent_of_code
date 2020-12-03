#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream file_copy_one ("nums.txt");
        string number_1, number_2, number_3;

        if (file_copy_one.is_open()) {
                while (getline( file_copy_one, number_1 )) {

			ifstream file_copy_two ("nums.txt");

			if (file_copy_two.is_open()) {
				while (getline( file_copy_two, number_2)) {

					if (stoi(number_1) + stoi(number_2) < 2020) {

						ifstream file_copy_three ("nums.txt");

						if (file_copy_three.is_open()) {

							while(getline( file_copy_three, number_3 )) {

								if (stoi(number_1) + stoi(number_2) + stoi(number_3) == 2020) {
									cout << stoi(number_1) * stoi(number_2) * stoi(number_3) << endl;
								}

							}

						} else cout << "Could not open a third instance of nums.txt" <<endl;
						
					}

				}
			} else cout << "Could not open an second instance of nums.txt" << endl;

		}
	} else cout << "Could not open a third instance of nums.txt" << endl;

}

