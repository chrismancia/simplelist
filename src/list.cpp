#include "include/list.h"

void List::print_menu(){

    int choice;
    cout << "*******\n";
    cout << "1 - Print List \n";
    cout << "2 - Add to List \n";
    cout << "3 - Delete from List \n";
    cout << "4 - Quit \n";
    cout << "Enter choice and press Return or Enter \n";
    cin >> choice;

    if(choice == 4){exit (0);}
    else if(choice == 3){delete_item();}
    else if(choice == 2){add_item();}
    else if(choice == 1){print_list();}
    else{cout << "Sorry no choice implemented \n";}

}
void List::add_item(){

    cout << "\n\n\n\n\n\n\n";
    cout << "*** Add Item ***";  
    cout << "type in an item and press enter \n"; 
    
    string item;
    cin >> item;

    list.push_back(item);
    cout << "Succesfully added item \n\n";
    cin.clear();
    print_menu();

}

void List::delete_item(){
    cout << "*** Delete Item *** \n";
    cout << "*** Select Index and Delete Item *** \n"; 

    if(list.size()){

        for(unsigned int i =0; i < list.size(); i++){
            cout << i << ": " << list[i] << "\n";
        }
    }else{cout << "no items to delete \n";}

    print_menu();

}
void List::print_list(){

    cout << "\n\n\n\n\n\n\n";
    cout << "** Printing List ** \n";

    for(unsigned int list_index=0; list_index < list.size(); list_index++){
        cout << " * " << list[list_index] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm'){
        print_menu();
    }
    else{cout << "Invalid Choice. Quitting Menu.. \n";}

}