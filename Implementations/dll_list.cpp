#pragma once
#include "../Interfaces/list.hpp"
#include "../Base_Structures/dll_node.hpp"
#include <stdexcept>

template <typename T>
class DLList : public List<T> {

private:
    DLLNode<T>* dummy;      // sentinel head node, holds no real data
    int n;                  // number of elements in the list

public:
    ~DLList() {

    }

    int size() const override {
        return n;
    }

    T get(int i) const override {

    }
    
    T set(int i, T x) override {

    }

    void add(int i, T x) override {

    }

    T remove(int i) {
        
    }
};

