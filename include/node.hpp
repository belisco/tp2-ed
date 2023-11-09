#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

class Node {
  friend class Graph;
  public:
    Node();
    void setLabel(int newLabel);
    void addNeighbour(int neighbourId);
    int getColour();
    void setColour(int newColour);

  private:
    int label;
    int colour;
    int* neighbours;
    int numNeighbours;
};

#endif
