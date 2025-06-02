#include "ReplaceLine.hpp"

ReplaceLine::ReplaceLine(std::string filename, std::string s1, std::string s2){
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}
#include <iostream>

void ReplaceLine::remplaceS2(){
	std::ifstream fichier(this->filename.c_str());
	std::ofstream fichier2((this->filename + ".replace").c_str());
	std::string line;
	bool b;
	if (!fichier.is_open())
		return ;
	b = static_cast<bool>(std::getline(fichier, line));
	while (b){
		while (line.find(this->s1) != std::string::npos){
			line = line.substr(0, line.find(this->s1)) + this->s2 + line.substr(line.find(this->s1) + this->s1.length());
		}
		fichier2 << line;
		b = static_cast<bool>(std::getline(fichier, line));
		if (b)
			fichier2 << std::endl;
	}
	fichier.close();
	fichier2.close();
}