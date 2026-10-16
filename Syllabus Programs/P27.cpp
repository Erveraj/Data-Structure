// Program No. 27: Program to Implement a Priority Queue

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

struct Item {
	int value;
	int priority;
};

class PriorityQueue {
private:
	Item items[MAX_SIZE];
	int size;

public:
	PriorityQueue() : size(0) {}

	bool enqueue(int value, int priority) {
		if (size == MAX_SIZE) {
			cout << "Priority queue is full.\n";
			return false;
		}

		// Larger numbers indicate higher priority. Equal priorities stay FIFO.
		int position = size;
		while (position > 0 && items[position - 1].priority < priority) {
			items[position] = items[position - 1];
			--position;
		}
		items[position] = {value, priority};
		++size;
		return true;
	}

	bool dequeue() {
		if (size == 0) {
			cout << "Priority queue is empty.\n";
			return false;
		}

		cout << "Removed value: " << items[0].value
			 << " (priority " << items[0].priority << ")\n";
		for (int i = 1; i < size; ++i) {
			items[i - 1] = items[i];
		}
		--size;
		return true;
	}

	void peek() const {
		if (size == 0) {
			cout << "Priority queue is empty.\n";
			return;
		}
		cout << "Highest-priority value: " << items[0].value
			 << " (priority " << items[0].priority << ")\n";
	}

	void display() const {
		if (size == 0) {
			cout << "Priority queue is empty.\n";
			return;
		}
		cout << "Value\tPriority\n";
		for (int i = 0; i < size; ++i) {
			cout << items[i].value << '\t' << items[i].priority << '\n';
		}
	}
};

int main() {
	PriorityQueue queue;
	int choice;

	do {
		cout << "\n--- Priority Queue ---\n"
			 << "1. Insert\n"
			 << "2. Remove highest priority\n"
			 << "3. Peek\n"
			 << "4. Display\n"
			 << "0. Exit\n"
			 << "Enter choice: ";

		if (!(cin >> choice)) {
			cout << "Invalid input.\n";
			return 1;
		}

		switch (choice) {
			case 1: {
				int value, priority;
				cout << "Enter value and priority: ";
				if (!(cin >> value >> priority)) {
					cout << "Invalid input.\n";
					return 1;
				}
				queue.enqueue(value, priority);
				break;
			}
			case 2:
				queue.dequeue();
				break;
			case 3:
				queue.peek();
				break;
			case 4:
				queue.display();
				break;
			case 0:
				cout << "Exiting.\n";
				break;
			default:
				cout << "Invalid choice. Try again.\n";
		}
	} while (choice != 0);

	return 0;
}
