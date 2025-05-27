#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>


class Harl{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		std::string level[4];
	public:
		Harl();
		void complain( std::string level );
		int getIndex( std::string level );


};

#endif