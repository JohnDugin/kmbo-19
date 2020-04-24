#pragma once
#include <iostream>

using ValueType = double;

class OneList{
    struct Node {
        Node(const ValueType& value, Node* next = nullptr);
        ~Node();

        void insertNext(const ValueType& value);
        void removeNext();

        ValueType value;
        Node* next;
    };

public:
    ////
    OneList();
    OneList(const OneList& copyList);
    OneList& operator=(const OneList& copyList);
    OneList& operator+=(const OneList& copyList);
    ~OneList();
    ////

    // доступ к значению элемента по индексу
    ValueType& operator[](const size_t pos) const;
    // доступ к узлу по индексу
    OneList::Node* getNode(const size_t pos) const;

    // вставка элемента по индексу, сначала ищем, куда вставлять (О(n)), потом вставляем (O(1))
    void insert(const size_t pos, const ValueType& value);
    // вставка в конец (О(n))
    void pushBack(const ValueType& value);
    // вставка в начало (О(1))
    void pushFront(const ValueType& value);


    //удаление элементов
    void pop(const size_t pos);
    void popNode(Node* node);
    void popFront();
    void popBack();


    long long int findIndex(const ValueType& value) const;
    Node* findNode(const ValueType& value) const;


    void reverse();


    size_t size() const;

private:
    Node*	_head;
    size_t	_size;

    void forceNodeDelete(Node* node);
};
