#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>

bool SpecialCase(char *InPutString){

	if (!strcmp(InPutString, "nan")||
		!strcmp(InPutString, "nanf")||
		!strcmp(InPutString, "-inf")||
		!strcmp(InPutString, "-inff")||
		!strcmp(InPutString, "+inf")||
		!strcmp(InPutString, "+inff"))
		return (true);
	return (false);
}

void WriteChar(char *InPutString){
	int PrintValue = atoi(InPutString);

	std::cout << "char: ";

	if (SpecialCase(InPutString) || PrintValue < 0 || PrintValue > 127)
	std::cout << "impossible\n";

	else if ((PrintValue < 33 && PrintValue >= 0) || PrintValue == 127)
	std::cout << "Non displayable\n";

	else if (PrintValue > 32 && PrintValue < 127)
	std::cout << "\'"<< (char)PrintValue << "\'\n";
}

void WriteInt(char *InPutString){
	int PrintValue = atoi(InPutString);

	std::cout << "int: ";

	if (SpecialCase(InPutString) || (strlen(InPutString) > 20))
	std::cout << "impossible\n";
	else std::cout << PrintValue << "\n";
}

bool InputValidation(char *InPutString){
	int Index = -1;
	int HoldLength = strlen(InPutString);
	int DotCount = 0;
//std::cout << HoldLength << "\n";
	if (SpecialCase(InPutString))
		return (false);
	while (++Index < HoldLength){

		if (Index > 0 && Index < -1 + HoldLength && InPutString[Index] == '.'&& InPutString[1+ Index] != 'f' && DotCount == 0){
			Index++;
			DotCount = 1;
		}

		if (Index == 0 && (InPutString[Index] == '-' || InPutString[Index] == '+'))
			Index++;

		if (Index == -1 + HoldLength && InPutString[Index] == 'f')
			Index++;

//		std::cout << HoldLength << " " <<Index <<" " <<InPutString[Index] <<"\n";

		if (Index < HoldLength && !std::isdigit(InPutString[Index]))
			return true;
	}

			return (false);
}

bool DoubleSpecial(char *InPutString){
	if (!strcmp(InPutString, "nanf")||
		!strcmp(InPutString, "-inff")||
		!strcmp(InPutString, "+inff")){
		InPutString[-1 + strlen(InPutString)] = '\n';
		std::cout << InPutString;
		return false;
	}
	return true;
}

bool FloatSpecial(char *InPutString){
	int Index = -1;
	int FCount = 0;

	if (!strcmp(InPutString, "nanf"))
		return false;
	while (InPutString[++Index])
		if (InPutString[Index] == 'f')
			FCount++;
	return (FCount <= 1 ? true : false);
}

//int GetPrecisionLength(char *InPutString){
//	int Index = -1;
//	bool StartCount = false;
//	int precisionLength = 0;
//	while (InPutString[++Index]){
//		if (StartCount)precisionLength
//	}
//}

void WriteFloat(char *InPutString){
	double PrintValue;
	int precision = 1000000;

	std::cout << "float: ";
	if (SpecialCase(InPutString)){
			std::cout << InPutString << (FloatSpecial(InPutString) == true ? "f\n" : "\n");
	}
	else{
		PrintValue = atof(InPutString);
		while (precision > 1){
			PrintValue = roundf(PrintValue * precision)/precision;
			precision /= 10;
		}
		std::cout <<std::fixed << std::setprecision(1)<< PrintValue << "\n";
		//std::cout << PrintValue << "f\n";
	}
}

void WriteDouble(char *InPutString){
	double PrintValue;
	int precision = 1000000;

	std::cout << "double: ";
	if (SpecialCase(InPutString)){
		if(DoubleSpecial(InPutString))
			std::cout << InPutString << "\n";
	}
	else{
		PrintValue = atof(InPutString);
		while (precision > 1){
			PrintValue = roundf(PrintValue * precision)/precision;
			precision /= 10;
		}
		std::cout <<std::fixed << std::setprecision(1)<< PrintValue << "\n";
	}
}

int main(int int_in, char **char_in){
	int ToIntNumber = 0;

	if (int_in != 2 || char_in[1][0] == '\0' || InputValidation(char_in[1])){
		std::cout << "Invalid Input\n";
		return(0);}
	ToIntNumber = atoi(char_in[1]);
	WriteChar(char_in[1]);
	WriteInt(char_in[1]);
	WriteFloat(char_in[1]);
	WriteDouble(char_in[1]);
//	std::cout << char_in[1] << "   " <<ToIntNumber << '\n';

return (0);
}
