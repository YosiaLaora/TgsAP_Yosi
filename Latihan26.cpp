#include<iostream>
#include<string>
//Tgl 8 November 2024
//Materi

using namespace std;

int main() {
	
	string str1 = "STMIK";
	string str2 = "PENUSA";
	
	// Concatenation
	string result = str1 + " " + str2;
	cout << "Concatenation : " << result << std::endl;
	
	// Length
	size_t length = result.length();
	cout << "Length : " << length << std::endl;
	
	// Substring
	string sub = result.substr(6,6);
	cout << "Substring : " << sub << std::endl;
	
	// Find
	size_t pos = result.find("PENUSA");
	cout << "Position Of 'PENUSA' : " << pos << std::endl;
	
	// Replace 
	result.replace(0, 5, "Hi");
	cout << "Replace : " << result << std::endl;
	
	return 0;
}