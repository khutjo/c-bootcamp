#ifndef _BUREAUCRAT_
#define _BUREAUCRAT_

#include <iostream>

class Bureaucrat {
	
	private:
	int Grade;
	std::string Name;
	
	public:

	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	void operator=(Bureaucrat const &src);
	int getGrade();
	std::string getName();
	class GradeTooHighException: public std::exception{
	private:
	public:
	const char* what() const throw();
};
	class GradeTooLowException: public std::exception{
	private:
	public:
	const char* what() const throw();
};
	void ShouldIThrowAnException();
	void IncrementGrade();
	void DecrementGrade();
	void signForm(bool Status, std::string name, int grade);

};

std::ostream &operator<<(std::ostream &os, Bureaucrat &src);
#endif
