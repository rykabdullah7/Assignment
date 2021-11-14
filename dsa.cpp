class Arr_stack {
	char* stack;			//creating char array
	int size = 0;			//size of array
	int top = -1;			//top of stack

public:

	Arr_stack(int size) {
		stack = new char[size];            //making new array
		this->size = size;
	}
	bool IsEmpty() {        //function to check if the stack is empty
		return top < 0;
	}
	void Push(char element) {        //function to push element into stack
		stack[++top] = element;
	}
	void Pop() {           //function to remove top element from the stack
		int element = -1;
		element = stack[top];
		stack[top--] = -1;
	}
	char Peak() {          //function to return the top element of the stack
		return stack[top];
	}
};
