#include<iostream>

using namespace std;

void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);
main()
{
printMenu();
cout << endl;

while(true)
{
int choice;
cout << endl << "Calculate Aggregate(1) or compare marks(2)('1' or '2'): ";
cin >> choice;

if(choice == 1)
{
string name;
float matricMarks, interMarks, ecatMarks;
cout << "Enter name of student: ";
cin >> name;
cout << "Enter matric marks: ";
cin >> matricMarks;
cout << "Enter inter marks: ";
cin >> interMarks;
cout << "Enter ecat marks: ";
cin >> ecatMarks;
calculateAggregate(name, matricMarks, interMarks, ecatMarks);
}
if(choice == 2)
{
string nameStd1, nameStd2;
int ecatMarksStd1, ecatMarksStd2;
cout << "Enter name of first student: ";
cin >> nameStd1;
cout << "Enter ecat marks of  first student: ";
cin >> ecatMarksStd1;
cout << "Enter name of second student: ";
cin >> nameStd2;
cout << "Enter ecat marks of second student: ";
cin >> ecatMarksStd2;
compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
}
}
}
void printMenu()
{
       cout << " 	$$$$$    $$$$$     $$$$$$$$     $$$$$$$$$$$         "<<endl;
       cout << "        $$$$$    $$$$$     $$$              $$$             "<<endl;
       cout << "        $$$$$    $$$$$     $$$              $$$             "<<endl;
       cout << " 	$$$$$    $$$$$     $$$$$$$$         $$$             "<<endl;
       cout << "  	$$$$$    $$$$$     $$$              $$$             "<<endl;
       cout << "  	$$$$$$$$$$$$$$     $$$              $$$             "<<endl;
       cout << "  	$$$$$$$$$$$$$$     $$$$$$$$         $$$             "<<endl;
}

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
float aggregate;
aggregate = (matricMarks/1100*30)+(interMarks/550*30)+(ecatMarks/400*40);
cout << "Aggregate : "<<aggregate <<"%" ;
}
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
int std1RollNo,std2RollNo;
if(ecatMarksStd1 >= ecatMarksStd2)
{
std1RollNo = 1;
std2RollNo = 2;
}
if(ecatMarksStd1 < ecatMarksStd2)
{
std2RollNo = 1;
std1RollNo = 2;
}
cout << "Roll number of "<<nameStd1 << "is :"<<std1RollNo <<endl;
cout << "Roll number of "<<nameStd2 << "is :"<<std2RollNo <<endl;
}
  
