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
		typedef struct s_harl
		{
			std::string name;
			void (Harl::*harl)( void );
		}	t_harl;
		t_harl level[4];
	public:
		Harl();
		void complain( std::string level );


};

#endif