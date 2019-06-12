#ifndef _FORM_HPP_
#define _FORM_HPP_

#include "Bureaucrat.hpp"

class Form{

	private :
		std::string Name;
		std::string BureaucratName; 
		int BureaucratGrade; 
		bool SignState;
		static int const GradeToSign = 50;
		static int const GradeToExe  = 25;
	public :

	Form();
	~Form();
	Form(std::string name);
	Form(Form & src);
	void operator=(Form const &src);

	std::string getName();
	std::string getBureaucratName(); 
	int getBureaucratGrade();
	bool getSignState();
	int getGradeToSign();
	int getGradeToExe();

	void beSigned(Bureaucrat &src);

};

std::ostream &operator<<(std::ostream &os, Form &src);
#endif
