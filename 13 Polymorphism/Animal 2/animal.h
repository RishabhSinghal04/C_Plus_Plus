#pragma once

#include <string>

#include "stream_insertable.h"

class Animal : public StreamInsertable
{
public:
    Animal() = default;
    Animal(const std::string &description);
    ~Animal();

    virtual void breathe() const
    {
        std::cout << "Animal::breathe called for : " << m_description << std::endl;
    }

    // Stream insertable interface
    virtual void stream_insert(std::ostream &out) const override
    {
        out << "Animal [description : " << m_description << "]";
    }

protected:
    std::string m_description;
};
