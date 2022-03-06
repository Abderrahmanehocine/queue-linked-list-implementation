#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define sn struct node

struct node{
  int data;
  sn* next;
};

// Functions Declaration:

// enqueue or push elements in the queue
void enqueue(int data);
// dequeue or pop elements from the queue
void dequeue();
// check if the queue is empty or not
bool isEmpty();
// return the front element in the queue
int front();
// print the front element in the queue
void print();

#endif
