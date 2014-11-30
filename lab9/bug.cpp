//
//
#include <iostream>
#include <cmath>

using namespace std;

class Bug
{public:
	Bug(): position(0), dir(1) {}
	Bug(int p): position(p), dir(1){}
	void move();
	void turn();
	void display();
	
 private:
	int position;
	int dir;
};

int main ()
{ 
	Bug BugA(10);
	
	BugA.move();
	BugA.display();
	cout << endl;
	BugA.turn();
	BugA.display();
	cout << endl;
	BugA.move();
	BugA.display();
	cout << endl;
	
}

void Bug::move()
{
	position += dir;
}

void Bug::turn()
{
	dir *= -1;
}

void Bug::display()
{
	cout << "The current direction is: " << dir <<" "<<"The current position: " << position << " ";
}
