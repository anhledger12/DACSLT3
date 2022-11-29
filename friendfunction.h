#ifndef FUNCTION_H
#define FUNCTION_H

#include "template.h"

//--------------Essential functions---------------
string increment(string&);
bool check_cmd(string&);

//---------Readfile & Writefile--------------
void read_file(ifstream&, DSLK<Node<Sach>>&);
void read_file(ifstream&, DSLK<Node<User>>&);
void write_file(ofstream&, DSLK<Node<User>>&);
void write_file(ofstream&, DSLK<Node<Sach>>&);

//-----Find & Borrow & Return----------------
Sach& find_id (const string&, DSLK<Node<Sach>>&);
User& find_id (const string&, DSLK<Node<User>>&);
bool borrowbook(User&,Sach&);
bool returnbook(User&,Sach&);
#endif