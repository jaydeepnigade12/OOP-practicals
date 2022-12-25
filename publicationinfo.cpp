#include <iostream> 
#include <string> 
#include <conio.h> 
using namespace std; 

class publication
{
private: string title; float price;

public:
void getdata()
{
cout << "Enter title of publication: "; cin >> title;
cout << "Enter price of publication: "; cin >> price;
}

void putdata()
{
cout << "Publication title: " << title << endl; 
cout << "Publication price: " << price << endl;
}
};

class book : public publication
{
private:
int pagecount;
public:
void getdata()
{
publication::getdata();
cout << "Enter Book Page Count: "; cin >> pagecount;
}

void putdata()
{
publication::putdata();
cout << "Book page count: " << pagecount << endl;
}
};

class tape : public publication
{
private:
float ptime;
public:
void getdata()
{
publication::getdata();
cout << "Enter tap's playing time: "; cin >> ptime;
}

void putdata()
{
publication::putdata();
cout << "Tap's playing time: " << ptime << endl;
}
};

int main()
{

book b; tape t;
b.getdata();
t.getdata();
b.putdata();
t.putdata(); 
return 0;
}

