//
// Created by Matt Andrews on 10/7/2019.
//

#include "hw1.h"

#include <iostream>     // for std::cout, std::endl, std::cin
#include <string>       // for std::string
#include <ostream>
#include <sstream>
#include <fstream>
#include <vector> 
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
		_inputStorageNames.push_back(sBoing);
		ifile >> sBoing;
		std::stringstream temp(sBoing);
		int x = 0;
		temp >> x;
		_inputStorageID.push_back(x);
        //cout << sBoing << " " << endl;
    }

	for (int n = 0; n < _inputStorageNames.size(); ++n) 
	{
		cout << _inputStorageNames.at(n) << " " << endl;
		cout << _inputStorageID.at(n) << " " << endl;
	}

    return _id;
}

/*int hw1::getIdFromFile(string sBoing, std::istream iBoing, std::ostream oBoing)
{
    int _id = 1;
    cout << "Boing" << endl;
    return _id;
}*/