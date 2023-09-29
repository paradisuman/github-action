#include <iostream>
#include "tbox/tbox.h"
using namespace std;

int main (){
    tb_char_t path[1024];
    tb_directory_current(path, 1024);
    cout<<"[DEBUG]:"<<path<<endl;
    tb_directory_create("/tmp/xxx/");
    tb_directory_current_set("/tmp/xxx/");

    tb_directory_current_set(path);
    tb_directory_current(path, 1024);
    cout<<"[DEBUG]:"<<path<<endl;
}
