#include <gtest/gtest.h>
#include "queue.h"

using namespace std;

// Set up for our tests by instantiating our list and deallocating it
class CircularQueTest : public ::testing::Test {
protected:
    Queue* list;
    
    void SetUp() override {
        // This runs before each test to instantiate 
        list = new Queue();
    }
    
    void TearDown() override {
        // This runs after each test
        delete list;
    }
};

//Test a function where send in an index and increment it circularly
TEST_F(CircularQueTest, circular_increment){
    // Demo method for returning the index to 0 when it hits the last index
    //Given  -- 3 is our Maximum index

    //When
    int result = list->circular_increment(3);

    //Then
    EXPECT_EQ(result, 0);
}

//Test a function where send in an index and want a normal increment
TEST_F(CircularQueTest, regular_increment){
    // Demo method for returning the index to 0 when it hits the last index
    //Given

    //When
    int result = list->circular_increment(1);

    //Then
    EXPECT_EQ(result, 2);
}

// Test that the Queue default variables are set (happens) in the constructor  
TEST_F(CircularQueTest, constructorDefaults) {
    // GIVEN :

    // WHEN : 


    // THEN 

}
// Test that when you add to a list you can peek at the element and the size of the list updates
TEST_F(CircularQueTest, addFirst) {

    // GIVEN : a value you want to add to the list
    int newValue = 42;
    EXPECT_EQ(list->get_size(), 0);

    // WHEN : add an item to the list
    list->enqueue(newValue);

    // THEN peek at the front element --should equal the input


    // AND size should be bigger
    EXPECT_EQ(list->get_size(), 1);
}


TEST_F(CircularQueTest, isFull) {

    //GIVEN a list with a few elements
    //
        // list->enqueue(33);
        // list->enqueue(44);
        // list->enqueue(55);
        // list->enqueue(77);

        int result = list->is_full();

    // THEN  

  
}

// test that enqueuing to a full queue causes a overflow error
// this test is written for you, remove the skip function to run it
// use the following call to raise an error in the implementation
//  throw std::overflow_error("Queue at capacity: cannot enqueue");

TEST_F(CircularQueTest, addNodesWhenFull) {
    GTEST_SKIP();
    list->enqueue(33);
    list->enqueue(44);
    list->enqueue(55);
    list->enqueue(77);

    EXPECT_THROW(list->enqueue(88), std::overflow_error);
}

// ************ TEST that I can remove an element.
TEST_F(CircularQueTest, removeElement) {

    // GIVEN :

    // WHEN : run  dequeue method of the list data structure we are implementing


    // THEN 

}

// ************ TEST that I can remove an element then add to a full queue.
// this test is written for you, 
// remove the skip function to include in test run

TEST_F(CircularQueTest, circular) {
    GTEST_SKIP();
    // GIVEN : full queue
        list->enqueue(33);
        list->enqueue(44);
        list->enqueue(55);
        list->enqueue(77);

        int isfull = list->is_full();
        EXPECT_TRUE(isfull);

        list->dequeue();
        list->enqueue(111);

        list->display();
    // THEN  
        int isfull2 = list->is_full();
        EXPECT_TRUE(isfull2);


}


// ************ TEST that I can remove an element then add to a full queue, 
//              but adding another fails.
// this test is written for you, 
// remove the skip function to include in test run

TEST_F(CircularQueTest, circularOverflow) {
    GTEST_SKIP();
    // GIVEN : full queue
        list->enqueue(33);
        list->enqueue(44);
        list->enqueue(55);
        list->enqueue(77);

        int isfull = list->is_full();
        EXPECT_TRUE(isfull);

        list->dequeue();
        list->enqueue(111);

        list->display();
    // THEN  test that   TODO
        int isfull2 = list->is_full();
        EXPECT_TRUE(isfull2);

        EXPECT_THROW(list->enqueue(88), std::overflow_error);
}

// this test is written for you, 
// remove the skip function to include in test run
TEST_F(CircularQueTest, underflow){
    GTEST_SKIP();
    EXPECT_THROW(list->dequeue(), std::underflow_error);
}

// do the same as above, testing that the code raises an underflow error
// for the first_element method (the peek function)
TEST_F(CircularQueTest, underflowPeek){

}