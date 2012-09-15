#ifndef __STACK_H__
#define __STACK_H__

class Stack {
 private:
  int* theStack;
  int top;
  int maxSize;

 public:
  Stack(int initialSize = 10);
  ~Stack(); //destructor
  void push(int value);
  int pop();
  int peek();
  int size();
  int getMaxSize();
};


#endif
