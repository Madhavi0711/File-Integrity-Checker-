#ifndef HASH_UTILS_H
#define HASH_UTILS_H

#include <string>
using namespace std;

string sha256(const string& data);
string readFile(const string& filename);
void saveHashToFile(const string& filename, const string& hash);
string getPreviousHash(const string& filename);

struct HashNode {
    string hash;
    HashNode* next;
    HashNode(string h);
};

class HashLinkedList {
public:
    HashNode* head;
    HashLinkedList();
    void insert(string hash);
    void display();
    string getLatestHash();
};

#endif