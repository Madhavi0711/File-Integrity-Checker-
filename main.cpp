#include "../include/hash_utils.h"
#include <iostream>
using namespace std;

int main() {
    // string filename = "test.txt"; // Replace with your file
    string filename;
    cout<<"Enter FIle name to check "<<"\n";
    cin>>filename;
    string content = readFile(filename);
    if (content.empty()) return 1;

    string currentHash = sha256(content);
    string prevHash = getPreviousHash(filename);

    cout << "Current Hash: " << currentHash << endl;

    HashLinkedList hashList;
    hashList.insert(currentHash);

    if (prevHash.empty()) {
        cout << "No previous hash found. Saving current hash...\n";
        saveHashToFile(filename, currentHash);
    } else {
        cout << "Previous Hash: " << prevHash << endl;
        if (currentHash == prevHash)
            cout << "File is intact.\n";
        else
            cout << "File has been ALTERED!\n";
    }

    return 0;
}