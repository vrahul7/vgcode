//Diffrent input streams
#include <iostream>
using namespace std;
#define MAX 100
void gets_func();
void fgetc_func();
void fgets_func();
int main()

{
	//gets_func();
	//fgetc_func();
	fgets_func();
	return 0;
}
void gets_func()
{
	char a[MAX];
	cout<<"Enter the string : ";
	gets(a);
	cout << a ;
}
void fgetc_func(){
	FILE *pfile;
	int n=0,i=0;
	char c[MAX];
	pfile = fopen("file.txt","r");
	if(pfile==NULL)
		cout<<"Error in opening File";
	else{
		do{	
			c[i] = fgetc(pfile);
			cout<<c[i];
			if(c[i]=='$')
				n++;
			i++;
			}while (n!=3);
		fclose(pfile);
		printf("File Contains %d $",n);	
	}
}

void fgets_func(){
	FILE *pfile;
	char c[MAX];
	pfile = fopen("file.txt","r");
	if(pfile==NULL)
		cout<<"Error in opening File";
	else{
		if (fgets(c,MAX,pfile)!=NULL)//reads only first line
			puts(c);
		fclose(pfile);
	}
}

