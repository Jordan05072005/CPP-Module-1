#include <string>
#include <iostream>


// class Megaphone{
// 	private:
// 		std::string text;
// 	public:
// 		// Constructeur par défaut
// 		Megaphone() : text("") {}

// 		// Constructeur paramétré
// 		Megaphone(std::string text) : text(text) {}

// 		// Constructeur de copie (copie l'objet)
// 		Megaphone(const Megaphone& other) : text(other.text) {}

// 	void	howl()const{
// 		std::cout << "blaba" << std::endl;
// 	};
// 	~Megaphone(){}
	
// };

int main(int argc, char* argv[]){
	int i;
	int	j;

	i = 0;
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (argv[++i]){
		j = -1;
		while (argv[i][++j]){
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
	}
	std::cout << "\n" ;
}