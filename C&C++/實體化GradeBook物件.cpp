#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
    public:
        GradeBook(string name)
        {
            setCourseName(name);
        }
        void setCourseName(string name)
        {
            courseName = name;
        }

        string getCourseName()
        {
            return courseName;
        }

        void displayMessage()
        {
            cout << "welcome VS Code C++\n"
                 << getCourseName() << "!" << endl;
        }

        private:
            string courseName;
};

int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ programming");
    GradeBook gradeBook2("CS101 Data Structures in C++");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;
}
