//
// Created by oguns on 10/11/2017.
//

#include <iostream>
#include "ChargeStack.h"

using namespace std;


ChargeStack::~ChargeStack() {
    v.clear();
}

void ChargeStack::push(const Device &device) {
    v.push_back(device);
}

Device ChargeStack::pop() {
    Device d = v.back();
    v.pop_back();
    return d;
}

Device &ChargeStack::peek()  {
    return v.back();
}

int ChargeStack::size() const {
    return v.size();
}

bool ChargeStack::isEmpty() const {
    return v.empty();
}

void ChargeStack::print(ostream& stream) const {
    for (const auto &i : v)
    {
        i.print(stream);
    }
}
