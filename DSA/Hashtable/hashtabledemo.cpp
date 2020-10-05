#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class Hashtable{
    public:
    string hashArray[50][50];
    
    
    void hashInsert(string key, string value){
        int hashkey = hashKey(key);
        if(hashkey != 0){
            hashArray[hashkey][0] = key;
            hashArray[hashkey][1] = value;
            cout << "(" << key << ", " << value << ")" << " has been inserted into the HashTable " << endl;
        }
        else{
            cout << "An error occurred while inserting key into the Hashtable" << endl;
        }   
    }

    int hashKey(string key){
        int hashed = 0;
        for(int i=0; i<key.length(); i++){
            hashed = (hashed + int(key.at(i)) * i % key.length());
        }
    return hashed;
    }

    string getValue(string key){
        int hashkey = hashKey(key);
        return hashArray[hashkey][1];
    }

    void deleteValue(string key){
        int hashkey = hashKey(key);
        if(hashArray[hashkey][1] == ""){
            cout << "No elements to delete " << endl;
        }
        else{
            hashArray[hashkey][0] = hashArray[hashkey][1] = '$';
            cout << "Element deleted " << endl;
        }

    }

};

int main(){
    Hashtable hsh;
    hsh.hashInsert("Nithin", "nai");
    hsh.hashInsert("Ullas", "8745983");
    hsh.hashInsert("Kushal", "77984345");
    hsh.deleteValue("Ullas");
    hsh.getValue("Nithin");
    return 0;
}