#include <iostream> 
#include <fstream> 
using namespace std; 

class file
{
char name[40]; int emp_id; float salary;

public:
void accept()
{

cin >> name; cin >> emp_id; cin >> salary;
}

void display()
{

cout << "\n"
<< name << "\t" << emp_id << "\t" << salary;
}
};

int main() 
{
file obj[5]; fstream f; 
int i, n;
f.open("input.txt", ios::out);
cout << "\nHow many employee information want to store:"; 
cin >> n;
cout << "\nEnter information of employee(name employee_id salary)"; 
for (i = 0; i < n; i++)
{
cout << "\nEnter information of " << i + 1 << " employee:"; 
obj[i].accept();
f.write((char *)&obj[i], sizeof(obj[i]));
}
f.close(); 
f.open("input", ios::in);
cout << "\nEnter information of employee is "; 
for (i = 0; i < n; i++)
{
f.read((char *)&obj[i], sizeof(obj[i])); 
obj[i].display();
}
f.close(); return 0;
}

