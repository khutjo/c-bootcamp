#include <iostream>

class class_a {

	private:

	public:

	void that(){
		std::cout << spd;
	}

};

class class_b : public class_a {
	
	private:
	public:
	int spd;
	int getstupid(){return spd;}
	void setstupid(int stp){ spd = stp;}
	virtual void that()const = 0;

};

int main (void){

//td::cout << "hello ";
	class_a a;
//	a.class_b.setstupid(5);
	a.that();

return (0);
}

