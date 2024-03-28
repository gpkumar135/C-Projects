#include<iostream>
using namespace std;
class house{
	private:
		int length,breadth;
	public:
	house()
	{
		length=0;
		breadth=0;
	}
	house(house &h1)
	{
		length=h1.length;
		breadth=h1.breadth;
	}
	void area()
	{
		cout<<"area :"<<length*breadth;
	
	};
	
};
int main()
{
	house h1;
	house h2(h1);
	h2.area();
	h1.area();
	return 0;
}
