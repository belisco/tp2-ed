#include "node.hpp"

Node::Node() {
  this->label = 0;
  this->colour = 0;
  this->neighbours = nullptr;
  this->numNeighbours = 0;
}

void Node::setLabel(int newLabel) {
  label = newLabel;
}

void Node::addNeighbour(int neighborId) {
  if (neighbours == nullptr) neighbours = new int[1];
   
  else {
    int* temp = new int[numNeighbours + 1];
    for (int i = 0; i < numNeighbours; i++) 
      temp[i] = neighbours[i];

    delete[] neighbours;
    neighbours = temp;
  }

  neighbours[numNeighbours++] = neighborId;
}

int Node::getColour() {
  return this->colour;
}

void Node::setColour(int newColour) {
  colour = newColour;
}

Graph::Graph(int size) {
  this->size = size;
  this->members = new Node[size];

  for (int i = 0; i < size; i++)
    this->members[i].neighbours = nullptr;
  
}

Graph::~Graph() {
  for (int i = 0; i < size; i++) {
    if (members[i].neighbours != nullptr)
      delete[] members[i].neighbours;   
  }

  delete[] members;
}

Node* Graph::getMembers() {
  return members;
}
