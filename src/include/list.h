#include <iostream>
#include <vector>
using namespace std;



class List{
private:
//only the class itself

protected:
//inherits or belongs to class

public:
//anything including the class

List(){ //constructer class

}
~List(){//destructer class

}

void print_menu();
void print_list();
void add_item();
void delete_item();

vector<string> list;
string name;

};