#include <iostream>
#include "AppUI.h"
#include "Converter.h"

void AppUI::add(Converter* converter) {
    converters.push_back(converter);
}
void AppUI::start(int index) {
    cls();
    Converter* converter = converters[index];
    converter->start(this);
}

void AppUI::cls() {
    system("cls");
}
double AppUI::readNumber(std::string prompt) {
    std::cout << "¬ведите " << prompt << ": ";
    double x;
    std::cin >> x;
    return x;
}