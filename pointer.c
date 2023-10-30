// DO NOT INCLUDE ANY OTHER LIBRARIES/FILES
#include "pointer.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// In this assignment, you can assume that function parameters are valid and the memory is managed by the caller //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Returns the area of a rectangle
// The shape is guaranteed to be a valid rectangle
double rectangle_area(void* shape)
{
    rectangle_t* rectangle = (rectangle_t*)shape;
    // IMPLEMENT THIS
    return 0;
}

// Returns the area of an equilateral triangle
// The shape is guaranteed to be a valid triangle
// The area of an equilateral triangle is sqrt(3)/4 times length squared
double triangle_area(void* shape)
{
    triangle_t* triangle = (triangle_t*)shape;
    // IMPLEMENT THIS
    return 0;
}

// Returns the perimeter of a rectangle
// The shape is guaranteed to be a valid rectangle
double rectangle_perimeter(void* shape)
{
    rectangle_t* rectangle = (rectangle_t*)shape;
    // IMPLEMENT THIS
    return 0;
}

// Returns the perimeter of an equilateral triangle
// The shape is guaranteed to be a valid triangle
double triangle_perimeter(void* shape)
{
    triangle_t* triangle = (triangle_t*)shape;
    // IMPLEMENT THIS
    return 0;
}

// Initializes a rectangle shape
void rectangle_construct(rectangle_t* shape, const char* name, double width, double length)
{
    // IMPLEMENT THIS
}

// Initializes a triangle shape
void triangle_construct(triangle_t* shape, const char* name, double length)
{
    // IMPLEMENT THIS
}

// Compares the area of shape1 with shape2
// Returns -1 if the area of shape1 is less than the area of shape2
// Returns 1 if the area of shape1 is greater than the area of shape2
// Returns 0 if the area of shape1 is equal to the area of shape2
int compare_by_area(shape_t* shape1, shape_t* shape2)
{
    // IMPLEMENT THIS
    return 0;
}

// Compares the perimeter of shape1 with shape2
// Returns -1 if the perimeter of shape1 is less than the perimeter of shape2
// Returns 1 if the perimeter of shape1 is greater than the perimeter of shape2
// Returns 0 if the perimeter of shape1 is equal to the perimeter of shape2
int compare_by_perimeter(shape_t* shape1, shape_t* shape2)
{
    // IMPLEMENT THIS
    return 0;
}

//
// Linked list functions
//

// Initializes a singly linked list
// If compare is NULL, the list is unsorted and new nodes are inserted at the head of the list
// If compare is not NULL, the list is sorted in increasing order based on the comparison function
void linked_list_init(linked_list_t* list, compare_fn compare)
{
    // IMPLEMENT THIS
}

// Inserts a node into the linked list based on the list comparison function
void linked_list_insert(linked_list_t* list, linked_list_node_t* node)
{
    // IMPLEMENT THIS
}

// Removes all nodes from the linked list containing the given shape
void linked_list_remove(linked_list_t* list, shape_t* shape)
{
    // IMPLEMENT THIS
}

//
// Tree iterator functions
//

// Initializes an iterator to the beginning of a tree (i.e., first in-order node)
void tree_iterator_begin(tree_iterator_t* iter, tree_node_t* root)
{
    // IMPLEMENT THIS
}

// Updates an iterator to move to the next in-order node in the tree if possible
// Moving past the last in-order node in the tree results in the iterator reaching a NULL state representing the end of the tree
void tree_iterator_next(tree_iterator_t* iter)
{
    // IMPLEMENT THIS
}

// Returns true if iterator is at the end of the tree or false otherwise
// The end of the tree is the position after the last in-order node in the tree (i.e., NULL state from tree_iterator_next)
bool tree_iterator_at_end(tree_iterator_t* iter)
{
    // IMPLEMENT THIS
    return false;
}

// Returns the current node that the iterator references or NULL if the iterator is at the end of the list
tree_node_t* tree_iterator_get_node(tree_iterator_t* iter)
{
    // IMPLEMENT THIS
    return NULL;
}

// Returns the current shape that the iterator references or NULL if the iterator is at the end of the list
shape_t* tree_iterator_get_shape(tree_iterator_t* iter)
{
    // IMPLEMENT THIS
    return NULL;
}

//
// Tree analysis functions
//

// Returns the maximum, minimum, and average area of shapes in the tree
// An empty tree should not modify the maximum, minimum, or average
void max_min_avg_area(tree_node_t* root, double* max, double* min, double* avg)
{
    // IMPLEMENT THIS
}

// Executes the func function for each node in the tree in-order
// The function takes in an input data and returns an output data, which is used as input to the next call to the function
// The initial input data is provided as a parameter to foreach, and foreach returns the final output data
// For example, if there are three nodes, foreach should behave like: return func(node3, func(node2, func(node1, data)))
double foreach(tree_node_t* root, foreach_fn func, double data)
{
    // IMPLEMENT THIS
    return data;
}
