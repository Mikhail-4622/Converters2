#pragma once
#include <vector>
#include <string>

class Converter;

class AppUI
{
    std::vector<Converter*> converters;
public:
    void add(Converter* coverter);
    void start(int index);
    
    void cls();
    double readNumber(std::string prompt);
};

