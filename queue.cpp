#include "queue.h"
#include <iostream>

Queue::Queue(){
    data = new int[MAX_SIZE] ;
    size = 0;
    front = 0;
    rear = -1;
    return;
} 

Queue::~Queue(){
    delete[] data;
}




int Queue::circular_increment(int index){
    int result;
    if( index==(MAX_SIZE -1)){
        result = 0;
    } else {
        result= index + 1;
    }
    // std::cout <<"index" << index << std::endl;
    return result;
}




void Queue::increment_rear(){
    // rear = 

    // size = 
}
void Queue::update_front(){

}
void Queue::enqueue(const int& value){
    
    // TODO check a for a full list

    // TODO add a value at the rear
 
}
int Queue::dequeue(){

    return -1;
}
int Queue::front_element(){
    if(size==0){
        throw std::underflow_error("Queue empty: cannot access any elements");
    }
    return data[front];
}

int Queue::get_size() const{
    return size;
}
bool Queue::is_full() const{
    return size==MAX_SIZE;
}
bool Queue::is_empty() const{
    return size==0;
}
void Queue::display() const {
    if (is_empty()) {
        std::cout << "Queue is empty\n";
        return;
    }
    std::cout << "Front is " << front << " rear is " << rear << " Queue elements: ";
    for (int i = 0; i < MAX_SIZE; i++) {
        int index = (front + i) % MAX_SIZE;
        std::cout << data[index] << " ";
    }
    std::cout << "\n";
}