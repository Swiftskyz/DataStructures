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
    Timer crimeTimerStack, crimeTimerOOP, musicStack, musicOOP;
    
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

void LinearTester :: testVsQueue()
{
    Timer crimeTimerQueue, crimeTimerOOP, musicQueue, musicOOP;
    
    crimeTimerQueue.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerQueue.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerQueue.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTesterQueue.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicQueue.startTimer();
    vector<music> tunez = FileController :: musicDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicQueue.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<music> musicList = FileController :: musicDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    musicQueue.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicQueue.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerQueue.resetTimer();
    musicOOP.resetTimer();
    musicQueue.resetTimer();
    
}

void LinearTester :: testVsDouble()
{
    Timer crimeTimerDouble, crimeTimerOOP, musicDouble, musicOOP;
    
    crimeTimerDouble.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerDouble.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerDouble.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTesterDouble.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicDouble.startTimer();
    vector<music> tunez = FileController :: musicDataToVector("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicDouble.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<music> musicList = FileController :: musicDataToList("/Users/shim6662/Documents/C++ Folder/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    musicDouble.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicDouble.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerDouble.resetTimer();
    musicOOP.resetTimer();
    musicDouble.resetTimer();
    
}
