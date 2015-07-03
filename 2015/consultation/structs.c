#include <stdio.h>

// definition of a structure
struct point_t {
	float x;
	float y;
};

// structure inside struct
struct triangle_t {
	struct point_t points[3];
};

void zero_out(struct point_t *point) {
	(*point).x = 0.0;
	point->y = 0.0;
}

void zero_first_point(struct triangle_t *triangle) {
	// zero out the x coordinate of the first point of a triangle
	triangle->points[0].x = 0.0;
}

int main() {

	// Variable of type struct:
	// [type] [name];
	// type = struct point_t
	// name = zero_point
	struct point_t zero_point;

	// Pointer to a structure:
	// [type] *[name];
	// type = struct point_t*
	// name = point_ptr
	struct point_t *point_ptr;

	point_ptr = &zero_point;

	zero_out(point_ptr);

	printf("%f %f\n",
		zero_point.x, zero_point.y);

	struct triangle_t triangle;
	zero_first_point(&triangle);

	printf("%f\n", triangle.points[0].x);


	return 0;
}