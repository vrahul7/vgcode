//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
template <class T>
class minElement
{
    // Complete the class.Make a private variable,constructors and method called
    // check() which takes one parameter and prints the output in new line. 
    T first;
	public:
    minElement(T a){
        first = a;
    }
    
    void check(T a){
        if(first<a)
            cout << first<<endl;
        else
            cout << a<<endl;
    }
};
int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        if(c==1)
        {
            string a,b;
            cin>>a>>b;
            minElement<string>obj1(a);//Creating Object for the class passing string a 
            obj1.check(b);
        }
        else if(c==2)
        {
            int a,b;
            cin>>a>>b;
            minElement<int>obj2(a);
            obj2.check(b);
        }
        else
        {
            char a,b;
            cin>>a>>b;
            minElement<char>obj3(a);
            obj3.check(b);
        }
    }
}

