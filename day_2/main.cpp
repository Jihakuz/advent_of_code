#include <iostream>
#include <fstream>
#include <string>

// 14-15 d: dzjgbdwdkdhddd
// 	14-15 d
//	dzjgbdwdkdhddd
//		14-15
//		d
//		dzjgbdwdkdhddd
//			14
//			15
//			d
//			dzjgbdwdkdhddd

using namespace std;
int main() {
	ifstream file_copy_one ("codes.txt");
	string line;

	int code_count = 0;

	if (file_copy_one.is_open()) {
		while (getline( file_copy_one, line)) {
			string code = line.substr(line.find(":") + 2, line.length());
			line  = line.substr(0, line.find(":"));

			string character = line.substr(line.size() - 1, line.size());

			line = line.substr(0, line.find(" "));

			int bounds[2] = {};

			bounds[0] = stoi(line.substr(0, line.find("-")));
			bounds[1] = stoi(line.substr(line.find("-") + 1, line.length() - 1));

			int character_count  = 0;

			for (int i = 0; i < code.size(); i ++)
				if (string(1, code[i]) == character) character_count ++;

			if (character_count >= bounds[0] && character_count <= bounds[1]) code_count ++;
		}
	} else cout << "Unable to read file" << endl;

	cout << code_count << endl;

}
