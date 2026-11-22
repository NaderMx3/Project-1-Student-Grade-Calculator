#include <iostream>
#include <string>
using namespace std;



int main(){
  double m1,m2,m3,m4,m5,m6;
  string name;
  cout << "Enter Your FullName: ";
  getline(cin, name);
   
  cout << "Enter Critical Thinking Mark:  "; cin >> m1;
  cout << "Enter Physics Mark:  "; cin >> m2;
  cout << "Enter Calculus 1 Mark:  "; cin >> m3;
  cout << "Enter Intro to CS Mark:  "; cin >> m4;
  cout << "Enter Discrete Mathematics Mark:  "; cin >> m5;
  cout << "Enter Prof Ethics Mark:  "; cin >> m6;

  if (m1 <= 100 && m2 <= 100 && m3 <= 100 && m4 <= 100 && m5 <= 100 && m6 <= 100 && m1 >= 0 && m2 >= 0 && m3 >= 0 && m4 >= 0 && m5 >= 0 && m6 >= 0)
  {
  
  cout << endl<< endl<< "======================================================" << endl << "                   STUDENT REPORT" << endl << "======================================================" << endl << endl;
    
  cout << "Student Name:   " << name;
  
  cout << endl<< endl  << "Critical Thinking & Problem-Solving:  " << m1 << endl << "Physics:                              " << m2 << endl << "Calculus 1:                           " << m3 <<  endl << "Introduction to Computer Science:     " << m4 <<  endl << "DiscreteMathematics:                  " << m5 <<  endl << "Professional Ethics:                  " << m6 <<  endl<< "------------------------------------------------------" ;

  double TotalScore, Percentage;
  TotalScore =m1+m2+m3+m4+m5+m6;
    cout << endl << endl << "TotalScore:   " << TotalScore << " / 600";
  Percentage = TotalScore / 600 * 100;
    cout << endl << "Percentage:   " << Percentage << "%" << endl;
  if (Percentage >= 65 && m1 >= 50 && m2 >= 50 && m3 >= 50 && m4 >= 50 && m5 >= 50 && m6 >= 50) 
    cout << "Status:       PASSED" << endl;
  else 
    cout << "Status:       FAILED" << endl;
  if (Percentage >= 95)
    cout << "FINAL GRADE:  A";
  else if (Percentage >= 85)
    cout << "FINAL GRADE:  B";
  else if (Percentage >= 75)
    cout << "FINAL GRADE:  C";
  else if (Percentage >= 65)
    cout << "FINAL GRADE:  D";
  else 
    cout << "FINAL GRADE:  F";

  cout <<endl<<endl<< "======================================================" << endl;
  }
else {
    cout << endl << "Invalid marks!" << endl;
    cout << "Every mark must be between 0 and 100." << endl;
}      
  return 0;
}