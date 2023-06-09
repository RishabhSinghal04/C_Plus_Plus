#pragma once

#include <string>
#include <string_view>
#include <iostream>

class Animal
{
public:
    Animal() = default;
    Animal(std::string_view description);
    virtual ~Animal();

    virtual void breathe() const
    {
        std::cout << "Animal::breathe called for : " << m_description << '\n';
    }

protected:
    std::string m_description;
};
