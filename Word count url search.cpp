#include "func.h"

int main()
{
    map <string, int> m;
    map<string, set<int>> wocc;
    vector <string> u;
    int sum = 0;
    read(m, sum, u, wocc);
    print(m, sum, u, wocc);
}
