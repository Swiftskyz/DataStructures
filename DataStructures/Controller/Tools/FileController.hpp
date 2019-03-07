//
//  FileController.hpp
//  DataStructures
//
//  Created by Himeno, Skylar on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"//ignore me

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    static BinarySearchTree<CrimeData> readDataToTree(string filename);//ignore
    
    static vector<Music> musicDataToArray(string filename);
    
    static Array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    static Binary SearchTree<Music> musicDataToTree(string filename);//Keep on ignoring
};

#endif /* FileController_hpp */
