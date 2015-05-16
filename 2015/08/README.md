# Осмо домашно
Вектор

Имате следният код:

```c++
#include <stdio.h>
#include <stdlib.h>
// index, size, data

// [0, 0, 0, 0, 0]
// [0, -1, -2, -3, -4 ...]

struct vector_t {
	int *data;
	int index, size;
};

void vector_init(struct vector_t*);
void vector_destroy(struct vector_t*);
int vector_get_size(struct vector_t);
void vector_resize(struct vector_t*);
int vector_at(struct vector_t, int index);
void vector_push_back(struct vector_t*, int value);
int vector_pop_back(struct vector_t*);

int main() {return 0;}

void vector_init(struct vector_t* v) {
	v->size = 5;
	v->index = 0;
	v->data = (int*) malloc(v->size * sizeof(int));
}

void vector_destroy(struct vector_t* v){
       // double free problem?
	free(v->data);
	v->size = 0;
	v->index = 0;
}

int vector_get_size(struct vector_t v) {
	return v.index;
}

void vector_push_back(struct vector_t* v, int value) {
	// is vector full?
	v->data[v->index++] = value;
}

int vector_at(struct vector_t v, int index) {
	// is valid index?
	return v.data[index];
}

int vector_pop_back(struct vector_t* v) {
	// is vector empty?
	return v->data[--v->index];
}

void vector_resize(struct vector_t*);
void vector_copy(struct vector_t* from, struct vector_t* to);
```

Направете нужните проверки в методите в които има коментари. Съобразете каква стойност ще върнете при възникване на грешка.

- Допишете __vector_resize__ така, че като го се извика:
Ако няма място във вектора да увеличава капацитета му два пъти (като се запазват старите стойности)
Ако елементите са по-малко от половината капацитет на вектора да смалява два пъти капацитета му, запазвайки стойностите записани в него.

- Допишете функцията __vector_copy__ която прави идентично копие на вектора from във вектора to. Приема се, че to е неинициализиран вектор, т.е. не му е викнат vector_init

- Демонстрирайте използването на вектора и копието му във функцията main
