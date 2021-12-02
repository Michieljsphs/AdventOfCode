#include "Tools.h"

std::vector<string> input = fileToStrings("input/day2input.txt");

void day2part1() {
	int horizontal = 0, depth = 0;
	string item;

	for (int i = 0; i < input.size(); i++) {
		item = input.at(i);
		if (item.find("forward", 0) != string::npos) {
			char number = item.back();
			int p = number - '0';
			horizontal += p;
		}
		else if (item.find("down", 0) != string::npos) {
			char number = item.back();
			int p = number - '0';
			depth += p;
		}
		else if (item.find("up", 0) != string::npos) {
			char number = item.back();
			int p = number - '0';
			depth -= p;
		}
	}
	cout << (depth * horizontal) << endl;
}

void day2part2() {
	int horizontal = 0, depth = 0, aim = 0;
	string item;

	for (int i = 0; i < input.size(); i++) {
		item = input.at(i);
		if (item.find("forward", 0) != string::npos) {
			char number = item.back();
			int p = number - '0';
			horizontal += p;
			depth += (aim * p);
		}
		else if (item.find("down", 0) != string::npos) {
			char number = item.back();
			int p = number - '0';
			aim += p;
		}
		else if (item.find("up", 0) != string::npos) {
			char number = item.back();
			int p = number - '0';
			aim -= p;
		}
	}
	cout << (depth * horizontal) << endl;
}
int main() {
	day2part1();
	day2part2();
}