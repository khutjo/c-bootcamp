#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Name("blank"), BureaucratName("none"), BureaucratGrade(150), SignState(false), ExeState(false){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Name(name), BureaucratName("none"),  BureaucratGrade(150), SignState(false), ExeState(false){
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	Name = "blank";
	BureaucratName = "none";
	BureaucratGrade = 150;
	SignState = false;
	ExeState = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src){
	Name = src.getName();
	BureaucratName = src.getBureaucratName();
	BureaucratGrade = src.getBureaucratGrade();
	SignState = src.getSignState();
	ExeState = src.getExeState();
	return ;
}

std::string ShrubberyCreationForm::getName(){return (Name);}
std::string ShrubberyCreationForm::getBureaucratName(){return (BureaucratName);}
int ShrubberyCreationForm::getBureaucratGrade(){return (BureaucratGrade);}
bool ShrubberyCreationForm::getSignState(){return (SignState);}
bool ShrubberyCreationForm::getExeState(){return (ExeState);}
int ShrubberyCreationForm::getGradeToSign(){return (GradeToSign);}
int ShrubberyCreationForm::getGradeToExe(){return (GradeToExe);}

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm & src){
	os <<	"Form Name         " << src.getName() <<
			"\nForm Sign status  " << (src.getSignState() == true ? "SIGNED" : "NOT SIGNED") <<
			"\nForm Execute status  " << (src.getSignState() == true ? "EXECUTED" : "NOT EXECUTED") <<
			"\nForm signed by    " << src.getBureaucratName() <<
			"\nBureaucrat Grade  " << src.getBureaucratGrade() << "\n";
	return (os);
}

void ShrubberyCreationForm::beSigned(Bureaucrat &src){
	src.ShouldIThrowAnException();
	if (src.getGrade() > getGradeToSign())
		src.signForm(false, Name, GradeToSign);
	else{
		BureaucratName = src.getName();
		BureaucratGrade = src.getGrade();
		SignState = true;
		src.signForm(true, Name, GradeToSign);
	}
}
