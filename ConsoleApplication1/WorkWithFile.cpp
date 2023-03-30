#include "WorkWithFile.h"

void WorkWithFile::Write(string text)
{
    for (int i = 0; i+1 < text.size(); i++) {
        text[0] = (char)toupper(text[0]);
        if(text[i]=='.')
            text[i+1] = (char)toupper(text[i + 1]);
    }
    ofstream writeFile;
    writeFile.open("Shifr.txt");
    writeFile << text;
    writeFile.close();
    Shifrator();
    
}

void WorkWithFile::Read()
{
    string text = Deshifrator();
    cout << text;
}

void WorkWithFile::Shifrator()
{
        string shifredText;
        ifstream file;
        file.open("Shifr.txt");
        getline(file,shifredText);
        for (int i = 0; i < shifredText.length(); i++) {
            shifredText[i] += 1;
        }
        file.close();
        ofstream codedFile;
        codedFile.open("Shifr.txt");
        codedFile << shifredText;
        codedFile.close();
}

string WorkWithFile::Deshifrator()
{
    string unShifredText;
    ifstream file;
    file.open("Shifr.txt");
    getline(file,unShifredText);
    for (int i = 0; i < unShifredText.length(); i++) {
        unShifredText[i] -= 1;
    }
    file.close();
    return unShifredText;
}
