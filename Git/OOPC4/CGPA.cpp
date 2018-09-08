#include <iostream>
using namespace std;
char CGPA(int);
int main()
{
	char a;
	int marks;
	cout<<CGPA(marks);
}

char CGPA(int marks){
	    marks = 90;
		if(marks > 90)
			return 'S'; 
		if ((marks > 80) && (marks <91))
			return 'A';
		if ((marks > 70) && (marks <81))
			return 'B'; 
		if ((marks > 60) && (marks <71))
			return 'C'; 
}	
