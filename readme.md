
## To build

cd build

cmake ..

make 

## Will not be able to run the program queue
## because it is commented out at the bottom of in cmakeLists

### to run tests
./queue_tests

valgrind --leak-check=yes ./queue_tests

## This project starts with a failing test for enqueuing an element to the list