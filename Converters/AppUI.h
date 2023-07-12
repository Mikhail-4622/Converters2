#pragma once
#include <vector>
#include <string>

class Converter;

class AppUI
{
    std::vector<Converter*> converters;
public:
    ~AppUI();
    void add(Converter* coverter);
    void start(int index);
    void printList();
    void mainloop();
    
    void cls();
    double readNumber(std::string prompt);
    void answer(double value, std::string suffix);
};

