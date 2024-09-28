#include "File.h"
#include <iostream>

// Constructor for the initializing the File class members
File::File(string fileName, string fileContent, Date& fileDate)
    : name(fileName), content(fileContent), date(fileDate) {}

// Method to compare if this file's date is earlier than another file's date
bool File::lessThan(File& otherFile) {
    return date.lessThan(otherFile.date); 
}

// Method to print file name and modification date 
void File::print() {
    cout << "File Name: " << name << endl;
    cout << "Date Last Modified: ";
    date.print(); // Call the Date class 
    cout << endl;
}

// Method to print file name, modification date, and content
void File::printContents() {
    print(); // First print the name and date
    cout << "Content: " << content << endl; // Then we will print the file content
}
