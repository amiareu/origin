#include <iostream>
#include <fstream>
#include <string>


class Address {
private:
	int Build_num, Apt_num;
	std::string City, Str;
	
public:
	
	std::string GetCity() {
		return City;
	};
	std::string SetCity(std::string City) {
		this->City = City;
			return  City;
	};
	std::string GetStr() {
		return Str;
	};
	std::string SetStr(std::string Str) {
		this->Str = Str;
		return  Str;
	};
	int GetBuild_num() {
		return Build_num;
	};
	int SetBuild_num(int Build_num) {
		this->Build_num = Build_num;
		return Build_num;
	};
	int GetApt_num() {
		return Apt_num;
	};
	int SetApt_num(int Apt_num) {
		this->Apt_num = Apt_num;
		return Apt_num;
	};



}; 

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");

	int size, h, j;
	std::string c, d;
	Address adr;

	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");
	
	if (!fin.is_open())
	{
		std::cout << "Не получилось открыть файл in.txt" << std::endl;
		return 1;
	};
	if (!fout.is_open())
	{
		std::cout << "Не получилось открыть файл out.txt" << std::endl;
		return 1;
	}

	fin >> size;
	fout << size << std::endl;

		while (!fin.eof())
		{
			fin >> c;
			fin >> d;
			fin >> h;
			fin >> j;
			fout << adr.SetCity(c)<<", " << adr.SetStr(d) << ", " << adr.SetBuild_num(h) << ", " << adr.SetApt_num(j) << std::endl;

		};

		
	fin.close();
	fout.close();
	
	return 0;
	};


