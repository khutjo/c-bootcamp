#include "Form.hpp"

Form::Form() : Name("blank"), BureaucratName("none"), BureaucratGrade(150), SignState(false){
	return ;
}

Form::Form(std::string name) : Name(name), BureaucratName("none"),  BureaucratGrade(150), SignState(false){
	return ;
}

Form::~Form(){
	Name = "blank";
	BureaucratName = "none";
	BureaucratGrade = 150;
	SignState = false;
}

Form::Form(Form & src){
	Name = src.getName();
	BureaucratName = src.getBureaucratName();
	BureaucratGrade = src.getBureaucratGrade();
	SignState = src.getSignState();
	return ;
}

std::string Form::getName(){return (Name);}
std::string Form::getBureaucratName(){return (BureaucratName);}
int Form::getBureaucratGrade(){return (BureaucratGrade);}
bool Form::getSignState(){return (SignState);}
int Form::getGradeToSign(){return (GradeToSign);}
int Form::getGradeToExe(){return (GradeToExe);}

std::ostream &operator<<(std::ostream &os, Form & src){
	os <<	"Form Name         " << src.getName() <<
			"\nForm Sign status  " << (src.getSignState() == true ? "SIGNED" : "NOT SIGNED") <<
			"\nForm signed by    " << src.getBureaucratName() <<
			"\nBureaucrat Grade  " << src.getBureaucratGrade() << "\n";
	return (os);
}

void Form::beSigned(Bureaucrat &src){
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
