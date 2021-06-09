#include <iostream>
#include <cstdlib>
#include <cstring>
#include <list>

using namespace std;

class HashTable{
    private:
        static const int hashGroups = 10;
        list<pair<int, string>> table[hashGroups];
    public:

        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();
};

bool HashTable::isEmpty() const{
    int sum{};
    for(int i{}; i< hashGroups;i++){
        sum += table[i].size();
    }


    if(!sum){
        return true;
    }
    return false;
}

int HashTable::hashFunction(int key)
{
    return key%hashGroups;
}

void HashTable::insertItem(int key, string value){
    int hashValeu = hashFunction(key);
    auto& cell = table[hashValeu];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(; bItr != cell.end();bItr++){
        if(bItr->first == key){
            keyExists = true;
            bItr->second = value;
            cout << "[WARNING] key exits. Value Replaced" << endl;
            break;
        }        
    }
    if(!keyExists){
        cell.emplace_back(key,value);
    }
    return;
}


void HashTable::removeItem(int key){
    int hashValeu = hashFunction(key);
    auto& cell = table[hashValeu];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(; bItr != cell.end();bItr++){
        if(bItr->first == key){
            keyExists = true;
            bItr = cell.erase(bItr);
            cout << "[INFO] Item Removed" << endl;
            break;
        }        
    }

    if(!keyExists){
        cout << "[WARNING] key not found." << endl;
    }
    return;
}


 void HashTable::printTable(){
     for(int i{};i < hashGroups; i++){
         if(table[i].size() == 0) continue;

         auto bItr  = table[i].begin();
         for(; bItr != table[i].end(); bItr++){
             cout << "[INFO] Key: " << bItr->first << " value: " << bItr->second << endl;
         }
     }
     return;
 }

int main(int argc, const char** argv) {

    HashTable ht;
    if(ht.isEmpty()){
        cout << "Correct answer. Good Job" << endl;
    }
    else{
        cout << "We need to check out code!" << endl;
    }
    
    ht.insertItem(305,"Fabio");
    ht.insertItem(50,"Douglas");
    ht.insertItem(35,"Alexandre");
    ht.insertItem(308,"Jean");
    ht.insertItem(445,"Sonia");
    ht.insertItem(125,"Fabio");
    ht.insertItem(125,"Junior");
    ht.insertItem(756,"Pedro");


    ht.printTable();
    ht.removeItem(308);
    ht.removeItem(125);
    if(ht.isEmpty()){
        cout << "Review your code" << endl;
    }
    else{
        cout << "Good Job!" << endl;
    }
    return 0;
}