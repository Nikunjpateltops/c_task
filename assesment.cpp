
/*

 Create a lecture management System
Make sure each business logic is denoted with appropriate comments and
make your code interactive and represent clean and clear output on your
console screen.
Adhere to the coding principles
Define a class to represent lecture details. Include the following members and the
program should handle at least details of 5 lecturers.
Data members:
a) Name of the lecturer
b) Name of the subject
c) Name of course
d) Number of lecturers
Data functions:
a) To assign initial values
b) To add a lecture details
c) To display name and lecture details
Make sure you have to use constructor concept in it
Make sure all naming conversion properly mention in this project work
Make sure all method name
Use class and object concepts
Upload all features in develop branch after completion all features
merge it with the main branch.

*/

#include <iostream>
using namespace std;

class lecture_details
{

public:
    string lecturer;
    string subject;
    string course;
    int Number_of_lecturers;

    lecture_details()
    {
        cout << "---------------------------------" << endl;
        cout << "below mentioned lecture details" << endl;
        cout << "---------------------------------" << endl;
    }

    lecture_details(string lect, string sub, string cor)
    {
        this->lecturer = lect;
        this->subject = sub;
        this->course = cor;

        cout << "Name of the lecture is : " << lecturer << endl;

        cout << "Name of the subject is : " << subject << endl;

        cout << "Name of the course is : " << course << endl;
    }

    lecture_details(int Num)
    {
        this->Number_of_lecturers = Num;

        cout << "Number of the lecturer is : " << Number_of_lecturers << endl;
    }
};

int main()
{

    lecture_details obj;

    lecture_details("dart", "flutter", "application");
    lecture_details(1);

    lecture_details("Sql", "database", "application");
    lecture_details(2);

    lecture_details("c++", "python", "web backend");
    lecture_details(3);

    lecture_details("Html", "django", "web frontend");
    lecture_details(4);

    lecture_details("css", "boostrap", "ui/ux design");
    lecture_details(5);
}