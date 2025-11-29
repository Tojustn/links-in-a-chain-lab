#pragma once
#include "link.hpp"

class Node{
    public:
        Link* link;
        Node* next;
        Node(Link* link, Node* next = nullptr) {
            this->link = link;
            this->next = next;
        }
};