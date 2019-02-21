//
//  Controller.cpp
//  DataStructures
//
//  Created by Himeno, Skylar on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start( )
{
    cout << "Welcome to the Data Structures App." << endl;
    testLinear();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(0);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced test");
    cout << wordHolder.getData() << endl;
    
}
//
//void Controller :: testLinear()
//{
 //   LinearTester lookieHere;
  //  lookieHere.testVsSTL();
//}
