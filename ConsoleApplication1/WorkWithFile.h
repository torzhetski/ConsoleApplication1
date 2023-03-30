#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;


  class WorkWithFile
{
public:
	   
	   static void Write(string);
	   static void Read();
private:
	   static void Shifrator();
	   static string Deshifrator();
};   


