// Robert Gutierrez 
// using struct from youtube video 
// link is : https://www.youtube.com/watch?v=0k23xe3c4es

#include <iostream> 
#include <string>
using namespace std;

 
struct student 
{
  string name; 
  int grade;

};

int main()
{
  
  student pupil1 ; 
  student pupil2 ; 

  cout << "Please enter student's name :" ; 
  cin >> pupil1.name;
  cout << "please enter students grade: " ; 
  cin >> pupil1.grade; 

  cout << "Please enter student's name :" ; 
  cin >> pupil2.name; 
  cout << "please enter students grade: " ; 
  cin >> pupil2.grade;

  cout << "Name" << "       " << "Grade" << endl;
  
  cout << pupil1.name << "     " << pupil1.grade << endl; 
  cout << pupil2.name << "     " << pupil2.grade << endl;
  
  system ("pause");



}
