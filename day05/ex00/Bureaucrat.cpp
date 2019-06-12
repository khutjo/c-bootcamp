#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat(std::string name, int grade) : Grade(grade),Name(name){
	ShouldIThrowAnException();
}

void Bureaucrat::ShouldIThrowAnException(){
	if (Grade < 1) throw GradeTooHighException();
	if (Grade > 150) throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
	Name = "";
	Grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	Name = src.Name;
	Grade = src.Grade;
}
void Bureaucrat::operator=(Bureaucrat const &src){
	Name = src.Name;
	Grade = src.Grade;
}

int Bureaucrat::getGrade(){return Grade;}

std::string Bureaucrat::getName(){return Name;}

const char* Bureaucrat::GradeTooHighException::what()const throw(){return "Grade Too High";}
const char* Bureaucrat::GradeTooLowException::what()const throw(){return "Grade Too Low";}

void Bureaucrat::IncrementGrade(){
	Grade--;
	ShouldIThrowAnException();
}
void Bureaucrat::DecrementGrade(){
	Grade++;
	ShouldIThrowAnException();
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &src){
	os << "Bureaucrat Name  :" << src.getName() <<
		  "\nBureaucrat Grade :" << src.getGrade() << "\n";
	return (os);
}
