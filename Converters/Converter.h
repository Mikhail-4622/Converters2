#pragma once
#include <string>
#include <functional>

class AppUI;

typedef std::function<void(AppUI*)> callback;

class Converter
{
    std::string name;
    callback func;
public:
    Converter(std::string name, callback func);
    std::string getName() const;

    void start(AppUI* ui);

};

