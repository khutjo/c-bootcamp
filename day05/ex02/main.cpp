#include "Bureaucrat.hpp"
//#include "Form.hpp"

int main(void){

try{
	Bureaucrat boy("khutjo", 50);
//	Form leave("leave");
//	leave.beSigned(boy);
//	std::cout << leave;
//	boy.IncrementGrade();
//	boy.DecrementGrade();
//	boy.signForm(true);
//	boy.signForm(false);
//	std::cout << boy;
	}
catch (std::exception & e){
	std::cout << "im in" << e.what();
	}
 return (0);
}
// }
//
// class zeroNumerator: public std::exception
// {
//     const char* what() const throw() { return "Numerator can't be 0.\n"; }
// };


