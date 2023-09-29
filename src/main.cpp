#include <iostream>
#include <cassert>
#include <string>
#include "tbox/tbox.h"
using namespace std;

int main (){
    cout<<"TEST"<<endl;
    tb_char_t path1[1024]= "/private/tmp/.lolly/chdir";
    tb_char_t  path2[1024];

    // 创建目录
    tb_directory_create("/private/tmp/.lolly");
    tb_directory_create("/private/tmp/.lolly/chdir");
    cout<<"[DEBUG]:"<<path1<<endl;

    // 设置为/private/tmp/xxx
    tb_directory_current_set("/private/tmp/.lolly/chdir");
    tb_directory_current(path2, 1024);
    cout<<"[DEBUG]:"<<path2<<endl;

    assert(string(path1) == string(path2));
}
