#include <iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"please enter your mark";
	cin>>mark;
	if(mark>=70)
{
	cout<<"grade = A";                 // first class
}
    else if(mark>=60)
    {
           cout<<"garde = B";          // second class upper
        
	}
	 else if(mark>=40)
	 {
	 	cout<<" grade = D";            
	 }
	 else
	 {
	 	cout<<"grade = F";
	 }
	 
	 return 0;
}

