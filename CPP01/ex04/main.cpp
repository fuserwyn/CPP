#include <iostream>
#include <string>
#include <fstream>

void replaceLine(std::string& line, std::string& str1, std::string& str2)
{
	size_t s1;
	s1 = line.find(str1, 0);
	while (s1 != std::string::npos)
	{
		line.replace(s1, str1.length(), str2);
		s1 = line.find(str1, s1 + str2.length());
	}
}

int replace(std::string& file, std::string& str1, std::string str2)
{
	if(str1.empty() || str2.empty())
		return 1;
	std:: ifstream inFile;
	inFile.open(file.c_str());
	if (!inFile.is_open())
		return 2;
	std::string outFiles = file + ".420";
	std::ofstream outFile(outFiles.c_str());
	if (outFile.fail())
		return 3;
	std::string line;
	while (!inFile.eof())
	{
		getline(inFile, line);
		replaceLine(line, str1, str2);
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}

int main ()
{
	std::string file;
	std::string str1;
	std::string str2;
	int res;

	file = "input";
	str1 = "420";
	str2 = "1620";
	res = replace(file, str1, str2);
	if (res == 1)
	{
		std::cout << "empty input" << std::endl;
		return 1;
	}
	else if (res == 2)
	{
		std::cout <<"opening failure"<< std::endl;
		return 2;
	}
	else if (res == 3)
	{
		std::cout <<"output failure"<< std::endl;
		return 3;
	}
	return 0;
}
