
#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept>

class Queue {
private:
     // Capacity
    const int MAX_SIZE=4;

    int* data;         // Defines the array  

    int front;         // Index of the front element
    int rear;          // Index of the rear element
    int size;          // Current number of elements in the queue


    void increment_rear();
    void update_front();
public:

    // Constructor
    explicit Queue();
    
    // Destructor
    ~Queue();
    
    
    // Queue operations
    void enqueue(const int& item);      // Add element to rear
    int dequeue();                      // Remove and return front element
    int front_element();                // Peek. Get  front element
    
    // Utility functions
    bool is_empty() const;              
    bool is_full() const;               
    int get_size() const;               
    int get_capacity() const {return MAX_SIZE;}       
    void clear();                       
    
    // Display function for debugging
    void display() const;
    int circular_increment(int index);
};

#endif