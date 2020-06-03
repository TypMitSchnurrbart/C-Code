#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <string>
using namespace std;

class Queue {

    public:
        Queue(int8_t size): stack_size(size) { queue_elements ++; }
        virtual ~Queue() { queue_elements --; }

        int enqueue(int& element) 
        {
            for ( int i = 0; i = stack_size; i++) 
            {
                if ( stack[i] == 0 ) 
                {
                    stack[i] = element;
                    break;
                }
            }
        }

        int dequeue(int index) 
        {
            int cache;
            cache = stack[index];
            stack[index] = 0;
            return cache;
        }

        //Amount of Queues
        int inline count_queue() { return queue_elements; }

        //Amount of Stack-Items
        int count_stack() {

            int counter;

            for (int i = 0; i = stack_size; i++) 
            {
                if (stack[i] != 0) 
                {
                    counter ++;
                }
            }
            return counter;
        }

        int stack[];
        int8_t stack_size;
        int8_t queue_elements;

}; 

int main() 
{
    Queue horst(12);

    int x = 3;
    horst.enqueue(x);

    cout << horst.count_stack() << endl;

}