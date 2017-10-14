//
// Created by oguns on 10/11/2017.
//

#include "device.h"

using std::to_string;
using std::cout;
using std::cerr;

Device::Device(const Device &dev):d_name(dev.d_name), d_date(dev.d_date), d_type(dev.d_type) {
    cout << "Copied device: ";
    print(cout);
}

Device::Device(const string &name, const Device::Type &type, const DateOfManufacture &date):d_name(name), d_type(type), d_date(date) {
}

Device::~Device() {
    cout << "Destructing device: ";
    print(cout);
}

void Device::print(ostream &stream) const {
    stream << toStr(d_type) << "\n";
}

string Device::toStr(Device::Type type) const {
    string deviceType;
    string date = to_string(d_date.year) + "/" + to_string(d_date.month) + "/" + to_string(d_date.day);
    switch (type){
        case Type::laptop:
            deviceType = "Laptop";
            break;
        case Type::watch:
            deviceType = "Watch";
            break;
        case Type::phone:
            deviceType = "Phone";
            break;
        default:
            deviceType = "Tablet";
    }

    return d_name + " " + deviceType + " Date: " + date;
}
