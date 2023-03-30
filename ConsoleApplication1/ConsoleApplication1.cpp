#include <iostream>
#include <string>
#include <fstream>
#include "WorkWithFile.h"

using namespace std;

 int main()
{
    setlocale(LC_ALL, "RUS");
    string text="привет я захар.а тебя.как зовут.";
    WorkWithFile::Write(text);
    ifstream file;
    file.open("Shifr.txt");
    getline(file, text);
    cout << text<<endl;
    WorkWithFile::Read();
    return 0;
}

