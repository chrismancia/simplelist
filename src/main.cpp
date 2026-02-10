#include "include/list.h"

int main(int arg_count, char* args[]){

    /*cout << "hello nurse" << endl; */
    if(arg_count > 1){
        List SimpleList;
        SimpleList.name = string(args[1]);
        SimpleList.print_menu();

    }
    else{
        cout << "User not defined exiting program.. \n" << endl;
    }

    return 0;
}
