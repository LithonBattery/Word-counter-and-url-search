#pragma once
#include "mlib.h"

void read(map <string, int>& m, int& sum, vector <string>& u, map<string, set<int>>& wocc);
void clean(string& word);
bool withURL(const string& text);
bool endsWithSymbol(const string& str, char symbol);
void print(map<string, int>& m, int& sum, vector <string>& u, map<string, set<int>>& wocc);