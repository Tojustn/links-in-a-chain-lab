#include <iostream>

#include "src/link.hpp"
#include "src/linked_list.hpp"

int main() {
  Link gold = Link("Gold");
  Node* node_one = new Node(&gold);
  
  Link silver = Link("Silver");
  Node* node_two = new Node(&silver);
  node_one->next = node_two;
  
  Link bronze = Link("Bronze");
  Node* node_three = new Node(&bronze);
  node_two->next = node_three;
  
  Node* retrieved_node_two = node_one->next;
  Node* retrieved_node_three = node_two->next;

  std::cout << "Retrieved node two: " << retrieved_node_two->link->get_material() << std::endl;
  std::cout << "Retrieved node three: " << retrieved_node_three->link->get_material() << std::endl;
  std::cout << "Node three: " << node_three->link->get_material() << std::endl;
  std::cout << "Node two: " << node_two->link->get_material() << std::endl;
  std::cout << "Node one: " << node_one->link->get_material() << std::endl;

  return 0;
}
