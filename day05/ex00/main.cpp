#include "Bureaucrat.hpp"

int main(void){

try{
	Bureaucrat boy("khutjo", 150);
//	boy.IncrementGrade();
//	boy.DecrementGrade();
	std::cout << boy;
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


