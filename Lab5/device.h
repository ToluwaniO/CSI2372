//
// Created by oguns on 10/11/2017.
//

#include <iostream>
#include <string>

#ifndef LAB5_DEVICE_H
#define LAB5_DEVICE_H

using std::ostream;
using std::string;

struct DateOfManufacture{
    int day;
    int month;
    int year;
    void print(ostream& os) const;
};

class Device {

public:
    enum class Type{
        watch, phone, tablet, laptop
    };
    Device(const Device& dev);
    Device(const string& name, const Type& type, const DateOfManufacture& date);
    ~Device();
    void print(ostream& stream) const;
    string toStr(Type type) const ;

private:
    string d_name;
    DateOfManufacture d_date;
    Type d_type;


};


#endif //LAB5_DEVICE_H
