//
// Created by oguns on 10/11/2017.
//

#include "device.h"
#include <vector>

using std::vector;

#ifndef LAB5_CHARGESTACK_H
#define LAB5_CHARGESTACK_H


class ChargeStack {
private:
    vector<Device> v;
public:
    ChargeStack() = default;
    ~ChargeStack();
    void push(const Device& device);
    Device pop();
    Device& peek() ;
    int size() const;
    bool isEmpty() const;
    void print(ostream& stream) const ;
};


#endif //LAB5_CHARGESTACK_H
