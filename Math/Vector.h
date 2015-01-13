///
//A vector consists of an array of components,
//And a dimension, or number of components.
typedef struct Vector
{
	float* components;
	int dimension;
} Vector;

///
//Determines the magnitude of a vector
//
//Parameters:
//	vec: The vector to find the magnitude of
//	dim: the number of components in the vector
float Vector_GetMag(const float* vec, const int dim);

///
//Normalizes a vector
//
//Parameters:
//	vec: the components to normalize
//	dim: the dimension of the vector
void Vector_Normalize(float* vec, const int dim);

///
//Multiplies a vector by a matrix storing the result in a new vector
//
//Parameters:
//	dest: the destination of the solution
//	mat: The matrix being applied to the vector
//	vec: The vector getting acted upon by the matrix
//	numRows: The number of rows in the matrix
//	numCols: The number of columns in the matrix
void Vector_Multiply(float* dest, const float* mat, const float* vec, const int numRows, const int numCols);

///
//Increments a vector by another vector
//
//Parameters:
//	dest: the vector getting incremented
//	src: The addend vector, or the vector being added to the destination
//	dim: The number of components in the vectors
void Vector_Increment(float* dest, const float* src, const int dim);
void Vector_Decrement(float* dest, const float* src, const int dim);

///
//Scales a vector by a scalar
//
//Parameters:
//	vec: The vector to be scaled
//	scaleValue: the scale factor
//	dim: the dimension of the vector being scaled
void Vector_Scale(float* vec, const float scaleValue, const int dim);

///
//Gets the scalar product of a specified vector and a scalar
//
//Parameters:
//	dest: The address to hold the scaled vector product
//	src: the initial vector to be scaled
//	scaleValue: the amount by which to scale the initial vector
//	dim: The number of components in the initial vector
void Vector_GetScalarProduct(float* dest, const float* src, const float scaleValue, const int dim);

///
//Adds together two vectors retrieving the sum
//
//Parameters:
//	dest: the destination of the sum vector
//	vec1: the first addend vector
//	vec2: the second addend vector
//	dim: the dimension of the vectors being added
void Vector_Add(float* dest, const float* vec1, const float* vec2, const int dim);
void Vector_Subtract(float* dest, const float* vec1, const float* vec2, const int dim);

///
//Prints out the contents of a vector
//
//Parameters:
//	vec: the vector to print
//	dim: the number of components in the vector
void Vector_Print(const float* vec, const int dim);