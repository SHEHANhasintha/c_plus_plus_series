// Standard Containers. A container is a holder object that stores a collection of other objects (its elements). 
// They are implemented as class templates, which allows a great flexibility in the types supported as elements.


// Container properties
// Sequence
// Elements in sequence containers are ordered in a strict linear sequence. Individual elements are accessed by their position in this sequence.
// Contiguous storage
// The elements are stored in contiguous memory locations, allowing constant time random access to elements. Pointers to an element can be offset to access other elements.
// Fixed-size aggregate
// The container uses implicit constructors and destructors to allocate the required space statically. Its size is compile-time constant. No memory or time overhead.


// template < class T, size_t N > class array;
// Array class
// Arrays are fixed-size sequence containers: they hold a specific number of elements ordered in a strict linear sequence.

// Internally, an array does not keep any data other than the elements it contains (not even its size, which is a template parameter, fixed on compile time). It is as efficient in terms of storage size as an ordinary array declared with the language's bracket syntax ([]). This class merely adds a layer of member and global functions to it, so that arrays can be used as standard containers.

// Unlike the other standard containers, arrays have a fixed size and do not manage the allocation of its elements through an allocator: they are an aggregate type encapsulating a fixed-size array of elements. Therefore, they cannot be expanded or contracted dynamically (see vector for a similar container that can be expanded).

// Zero-sized arrays are valid, but they should not be dereferenced (members front, back, and data).


// Complexity
// Constant.


#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    std::array<int, 10> v;

    //adding items to array
    for(int i=0;i<(sizeof(v)/sizeof(v[0]));i++){
        v.at(i) = i;
    }

    //getting the first element of the array
    std::cout << "first Item: " << v.front() << '\n';
    std::cout << "first Item: " << v.back() << '\n';

    //auto data type //get the statring address location of an array
    auto data = v.begin();
    std::cout << "start: " << data << '\n';

    //using pointer to point to the address allocated memory data value
    std::cout << "data variable value " << *data << '\n';    

    //displaying them to the array
    for(int i=0;i<(sizeof(v)/sizeof(v[0]));i++){
        std::cout << ' ' << v.at(i) << '\n';
    }

    std::cout << '\n';
    return 0;
}
