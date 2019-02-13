//
//  FileController.cpp
//  DataStructures
//
//  Created by Himeno, Skylar on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

LinkedList<Music> FileController :: musicDataToList(string fileName)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path.
    if (dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV seperated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData Instance from the line. Exclude a blank line (usually if opened seperately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        corr << "NO FILE" << endl;
    }
    
    return musicList;
}
