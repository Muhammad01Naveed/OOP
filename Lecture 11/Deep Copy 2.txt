
 #include <iostream>



using namespace std;

class Student
{    // Topics to be covered
	// User defined constructor
	// Deep Copy
private:
	string name;
	char* programe;
	int age = 0;
public:
	Student(const string n , const char* pr,int age) {
		name =n;
		programe = new char[strlen(pr) + 1];
		strcpy_s(programe,strlen(pr) + 1, pr);
		this->age = age;
		
	}
	Student(const Student& obj) {
		this->name = obj.name;
		this->age = obj.age;
		programe = new char[strlen(obj.programe)+1];
		strcpy_s(programe, strlen(obj.programe) + 1, obj.programe);
		
	}
	void display()const {
		cout << "\n Student Information";
		cout << "\n The Name of the student:" << name;
		cout << "\n The program of the student:" << programe;
		cout << "\n The Age of the student:" << age;
		
	}
};

 int main()
 {
	 Student S1("Ali","CSj",25);
	 Student S2(S1); 
	 S2.display();
	return 0;
	}

 
