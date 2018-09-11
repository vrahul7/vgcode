#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>
using namespace std;
int main ()
{
	fork();
	cout << "hello World";
	return 0;
}
