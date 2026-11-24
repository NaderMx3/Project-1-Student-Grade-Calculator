#include <iostream>
#include <string>
using namespace std;

const double A=4.0,B=3.0,C=2.0,D=1.0,F=0;
const double DMath_CHr=3,CT_CHr=2,Physics_CHr=3,Calc_CHr=3,Intro_CHr=2,Ethics_CHr=2;

int main(){
  double m1,m2,m3,m4,m5,m6;
  double grade1, grade2, grade3, grade4, grade5, grade6;
  
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

  double TotalScore, Percentage,GPA;
  TotalScore =m1+m2+m3+m4+m5+m6;
    cout << endl << endl << "TotalScore:   " << TotalScore << " / 600";
  Percentage = TotalScore / 600 * 100;
    cout << endl << "Percentage:   " << Percentage << "%" << endl;
  if (Percentage >= 65 && m1 >= 50 && m2 >= 50 && m3 >= 50 && m4 >= 50 && m5 >= 50 && m6 >= 50) 
    cout << "Status:       PASSED" << endl;
  else 
    cout << "Status:       FAILED" << endl;
  if (Percentage >= 95) {
    cout << "FINAL GRADE:  A";}
  else if (Percentage >= 85){
    cout << "FINAL GRADE:  B";}
  else if (Percentage >= 75){
    cout << "FINAL GRADE:  C";}
  else if (Percentage >= 65){
    cout << "FINAL GRADE:  D";}
  else {
    cout << "FINAL GRADE:  F";}
    
if (m1 >= 95) {
    grade1 = A;
      }
  else if (m1 >= 85){
    grade1 = B;}
  else if (m1 >= 75){
    grade1 = C;}
  else if (m1 >= 65){
    grade1 = D;}
  else {
    grade1 = F;}
    
    if (m2 >= 95) {
    grade2 = A;
      }
  else if (m2 >= 85){
    grade2 = B;}
  else if (m2 >= 75){
    grade2 = C;}
  else if (m2 >= 65){
    grade2 = D;}
  else {
    grade2 = F;}

    if (m3 >= 95) {
    grade3 = A;
      }
  else if (m3 >= 85){
    grade3 = B;}
  else if (m3 >= 75){
    grade3 = C;}
  else if (m3 >= 65){
    grade3 = D;}
  else {
    grade3 = F;}

    if (m4 >= 95) {
    grade4 = A;
      }
  else if (m4 >= 85){
    grade4 = B;}
  else if (m4 >= 75){
    grade4 = C;}
  else if (m4 >= 65){
    grade4 = D;}
  else {
    grade4 = F;}

    if (m5 >= 95) {
    grade5 = A;
      }
  else if (m5 >= 85){
    grade5 = B;}
  else if (m5 >= 75){
    grade5 = C;}
  else if (m5 >= 65){
    grade5 = D;}
  else {
    grade5 = F;}

    if (m6 >= 95) {
    grade6 = A;
      }
  else if (m6 >= 85){
    grade6 = B;}
  else if (m6 >= 75){
    grade6 = C;}
  else if (m6 >= 65){
    grade6 = D;}
  else {
    grade6 = F;}

   
   double Qp_Dmath, Qp_CT, Qp_Physics, Qp_calc, Qp_Intro, Qp_Ethics;
    
    
    Qp_CT = grade1 * CT_CHr;
    Qp_Physics = grade2 * Physics_CHr;
    Qp_calc = grade3 * Calc_CHr;
    Qp_Intro = grade4 * Intro_CHr;
    Qp_Dmath = grade5 * DMath_CHr;
    Qp_Ethics = grade6 * Ethics_CHr;
    GPA= (Qp_Dmath+Qp_CT+Qp_Physics+Qp_calc+Qp_Intro+Qp_Ethics)/(DMath_CHr+CT_CHr+Physics_CHr+Calc_CHr+Intro_CHr+Ethics_CHr);
  cout << endl <<"GPA:      "<<GPA;

  cout <<endl<<endl<< "======================================================" << endl;
  
  }
else {
    cout << endl << "Invalid marks!" << endl;
    cout << "Every mark must be between 0 and 100." << endl;
}      
  return 0;
}
