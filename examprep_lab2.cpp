#include <iostream>

using namespace std;
// Question: Fill in the final values of x, y, and z just before main returns
// Draw a memory diagram in the space provided
void question1(){ // Note: step through with students
	int x = 1;
	int y = 2;
	int z = 3;

	int *x_ptr = &x;
	++(*x_ptr);

	z = *x_ptr;
	++(*x_ptr);

	int *ptr = &y;
	*ptr = *x_ptr + z;
}
// What is the output of the following program? arr[] starts at address 1000
void question2(){ // Note: step through with students
	int arr[7] = {3, 5, 4, -2, 3, 1, 0};
	int *ptr = arr;
	while(ptr < arr + 7){
		cout << ptr << ": " << *ptr << endl;
		ptr = ptr + *ptr;
	}

}

// Question: Draw out the state of memory as stack frames at the breakpoint labeled with a comment
void question6(){ // Note: Step through with students and/or OneNote drawing
	int num1 = 42;
	int* num_ptr1 = &num1;
	int** ptr_ptr = &num_ptr1;
	int* num_ptr2 = num_ptr1;
	int num2 = 17;
	*ptr_ptr = &num2;
	ptr_ptr = &num_ptr2;
	// Breakpoint
}

int main(){
	question1();
	question2();
	question6();
}
