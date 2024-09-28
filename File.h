#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"  

using namespace std;

class File {
private:
    string name;      
    string content;  
    Date date;        

public:
    // Constructor
    File(string fileName, string fileContent, Date& fileDate);

    // Method to compare
    bool lessThan(File& otherFile);

    // Method to print file name 
    void print();

    // Method to print file name, modification date, and content
    void printContents();
};

#endif
