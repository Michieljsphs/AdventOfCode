#include "Tools.h"

vector<string> fileToStrings(string path)
{
	vector<string> inputVector;
	string line;
 	ifstream inputFile(path);
	if (inputFile.is_open())
	{
		while (getline(inputFile, line))
		{
			inputVector.push_back(line);
		}
		inputFile.close();
	}
	else {
		cout << "Unable to open file";
		return inputVector;
	}
	return inputVector;
}