#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include "Bureaucrat.hpp"

class ShrubberyCreationForm{
	private :
	
		std::string Name;
		std::string BureaucratName; 
		int BureaucratGrade; 
		static int const GradeToSign = 50;
		static int const GradeToExe  = 25;
		bool SignState;
		bool ExeState;

	public :

	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(ShrubberyCreationForm & src);
	void operator=(ShrubberyCreationForm const &src);

	std::string getName();
	std::string getBureaucratName(); 
	int getBureaucratGrade();
	bool getSignState();
	bool getExeState();
	int getGradeToSign();
	int getGradeToExe();

	virtual void beSigned(Bureaucrat &src) = 0;

};

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm &src);
#endif
