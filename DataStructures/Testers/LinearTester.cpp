//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Himeno, Skylar on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTesterSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<music> tunez = FileController :: musicDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<music> musicList = FileController :: musicDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();

}

void LinearTester :: testVsStack()
{
    Timer crimeTimerStack, crimeTimerOOP, musicStack, musicstack;
    
    crimeTimerStack.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerStack.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerStack.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTesterStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicStack.startTimer();
    vector<music> tunez = FileController :: musicDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicStack.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<music> musicList = FileController :: musicDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    musicStack.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerStack.resetTimer();
    musicOOP.resetTimer();
    musicStack.resetTimer();
    
}
