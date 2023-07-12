#include "Converter.h"

Converter::Converter(std::string name, callback func)
    : name(name), func(func) {
}

std::string Converter::getName() const {
    return name;
}

void Converter::start(AppUI* ui) {
    func(ui);
}