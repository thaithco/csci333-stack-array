#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  maxSize = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {

  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack


  if(top >= maxSize){
    int* temp = theStack;                                  //assigns
    theStack = new int[maxSize * 2];

    for(int i = 0; i < top; i++){
      theStack[i] = temp[i];    //assigns the old Stack value into the new theStack array
    }
    maxSize = maxSize * 2;
    delete[] temp;
    
  }


  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}

int Stack::getMaxSize() {
  return maxSize;
}
