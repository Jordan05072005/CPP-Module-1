#ifndef REPLACELINE_HPP
# define REPLACELINE_HPP

# include <string>
# include <fstream>

class ReplaceLine{
	private:
		std::string filename;
		std::string s1;
		std::string s2;
	public:
		ReplaceLine(std::string filename, std::string s1, std::string s2);
		ReplaceLine(){};
		~ReplaceLine(){};
		void remplaceS2();

};
#endif