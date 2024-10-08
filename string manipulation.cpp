#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello";
    
    //concatenation
    string greeting = str + ",world!";
    cout<<"concatenation:"<<greeting<<endl;
    
    //substring
    string part = greeting.substr(7,5);//extracts "world"
    cout<<"substring:"<<part<<endl;
    
    //find
    size_t pos = greeting.find("world");
    cout<<"find:'world' found at position"<<pos<<endl;
    
    //replace
    string replaced = greeting;
    replaced.replace(pos,5,"c++");
    cout<<"replace:"<<replaced<<endl;
    
    //insert
    string inserted = greeting;
    inserted.insert(5,"beautiful");
    cout<<"insert:"<<inserted<<endl;
    
    //erase
    string erased= greeting;
    erased.erase(5,7);//removes"beautiful"
    cout<<"erase:"<<erased<<endl;
    
    //to uppercase
    string uppercase = greeting;
    for ( char & c: uppercase)c = toupper(c);
    cout<<"to uppercase:"<<uppercase<<endl;
    
    //to lowercase
    string lowercase = greeting;
    for (char & c : lowercase)c = tolower(c);
    cout<<"to lowercase:"<<lowercase<<endl;
    
    return 0;
    
    
}