#include<iostream>
#include "FileController.h"
#include "File.h"
#include "FileService.h"
using namespace  std;
int  main() {
    cout<<"Hello  Wolrld";
    File   f;
    f.setname("abx.txt");f.setsize(88);
    FileService service;
    FileController cont;
    cont.setfile(f,service);
    cont.display(service);
    
    return  0;
}