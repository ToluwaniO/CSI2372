//
// Created by oguns on 10/11/2017.
//

#include "ChargeStack.h"

ChargeStack::ChargeStack():v(vector()) {

}

ChargeStack::~ChargeStack() {
    delete[] v;
}

void ChargeStack::push(const Device &device) {
    v.push_back(device);
}

Device ChargeStack::pop() {
    Device d = v.back();
    v.pop_back();
    return d;
}

Device &ChargeStack::peek() const {
    return v.back();
}

int ChargeStack::size() const {
    return v.size();
}

bool ChargeStack::isEmpty() const {
    return v.empty();
}
