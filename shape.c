#include <math.h>
#include "pointer.h"

// Returns the area of a rectangle
// The shape is guaranteed to be a valid rectangle
double rectangle_area(void* shape)
{
    rectangle_t* rectangle = (rectangle_t*)shape;
    // IMPLEMENT THIS
    return rectangle->width * rectangle->length;
}

// Returns the area of an equilateral triangle
// The shape is guaranteed to be a valid triangle
// The area of an equilateral triangle is sqrt(3)/4 times length squared
double triangle_area(void* shape)
{
    triangle_t* triangle = (triangle_t*)shape;
    // IMPLEMENT THIS
    return (sqrt(3) / 4) * pow(triangle->length, 2);
}

// Returns the perimeter of a rectangle
// The shape is guaranteed to be a valid rectangle
double rectangle_perimeter(void* shape)
{
    rectangle_t* rectangle = (rectangle_t*)shape;
    // IMPLEMENT THIS
    return 2 * (rectangle->width + rectangle->length);
}

// Returns the perimeter of an equilateral triangle
// The shape is guaranteed to be a valid triangle
double triangle_perimeter(void* shape)
{
    triangle_t* triangle = (triangle_t*)shape;
    // IMPLEMENT THIS
    return 3 * triangle->length;
}

// Initializes a rectangle shape
void rectangle_construct(rectangle_t* shape, const char* name, double width, double length)
{
    // IMPLEMENT THIS
    shape->width = width;
    shape->length = length;
}

// Initializes a triangle shape
void triangle_construct(triangle_t* shape, const char* name, double length)
{
    // IMPLEMENT THIS
    shape->length = length;
}

// Compares the area of shape1 with shape2
// Returns -1 if the area of shape1 is less than the area of shape2
// Returns 1 if the area of shape1 is greater than the area of shape2
// Returns 0 if the area of shape1 is equal to the area of shape2
int compare_by_area(shape_t* shape1, shape_t* shape2)
{
    double area1 = shape1->area(shape1);
    double area2 = shape2->area(shape2);
    
    // IMPLEMENT THIS
    if (area1 < area2)
        return -1;
    else if (area1 > area2)
        return 1;
    else
        return 0;
}

// Compares the perimeter of shape1 with shape2
// Returns -1 if the perimeter of shape1 is less than the perimeter of shape2
// Returns 1 if the perimeter of shape1 is greater than the perimeter of shape2
// Returns 0 if the perimeter of shape1 is equal to the perimeter of shape2
int compare_by_perimeter(shape_t* shape1, shape_t* shape2)
{
    double perimeter1 = shape1->perimeter(shape1);
    double perimeter2 = shape2->perimeter(shape2);
    
    // IMPLEMENT THIS
    if (perimeter1 < perimeter2)
        return -1;
    else if (perimeter1 > perimeter2)
        return 1;
    else
        return 0;
}
