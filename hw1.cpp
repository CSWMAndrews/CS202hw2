//
// Created by Matt Andrews on 10/7/2019.
//

#include "hw1.h"

#include <iostream>     // for std::cout, std::endl, std::cin
#include <string>       // for std::string
#include <ostream>
#include <sstream>
#include <fstream>
using std::cout;
using std::endl;
using std::string;


int hw1::getIdFromFile()
{
    cout << "Boing" << endl;

    int _id = 1;

    std::ifstream ifile("users.txt");
    string sBoing;

    while(ifile)
    {
        ifile >> sBoing;
        cout << sBoing << " ";
    }

    return _id;
}

/*int hw1::getIdFromFile(string sBoing, std::istream iBoing, std::ostream oBoing)
{
    int _id = 1;
    cout << "Boing" << endl;
    return _id;
}*/