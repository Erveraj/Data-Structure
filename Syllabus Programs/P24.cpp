// Program No. 24: Program to Implement a Dynamic Queue
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;

	explicit Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
	Node* front;
	Node* rear;

public:
	Queue() : front(nullptr), rear(nullptr) {}

	~Queue() {
		while (front != nullptr) {
			Node* temp = front;
			front = front->next;
			delete temp;
		}
	}

	bool isEmpty() const {
		return front == nullptr;
	}

	void enqueue(int value) {
		Node* newNode = new Node(value);
		if (isEmpty()) {
			front = rear = newNode;
		} else {
			rear->next = newNode;
			rear = newNode;
		}
		cout << value << " inserted into the queue.\n";
	}

	void dequeue() {
		if (isEmpty()) {
			cout << "Queue underflow. Queue is empty.\n";
			return;
		}

		Node* temp = front;
		cout << "Deleted element: " << temp->data << '\n';
		front = front->next;
		if (front == nullptr) {
			rear = nullptr;
		}
		delete temp;
	}

	void display() const {
		if (isEmpty()) {
			cout << "Queue is empty.\n";
			return;
		}

		cout << "Queue (front to rear): ";
		for (Node* current = front; current != nullptr; current = current->next) {
			cout << current->data << ' ';
		}
		cout << '\n';
	}
};

int main() {
	Queue queue;
	int choice = 0;
	int value;

	do {
		cout << "\n--- Dynamic Queue ---\n"
			 << "1. Enqueue\n"
			 << "2. Dequeue\n"
			 << "3. Display\n"
			 << "4. Exit\n"
			 << "Enter your choice: ";

		if (!(cin >> choice)) {
			break;
		}

		switch (choice) {
		case 1:
			cout << "Enter value: ";
			if (cin >> value) {
				queue.enqueue(value);
			}
			break;
		case 2:
			queue.dequeue();
			break;
		case 3:
			queue.display();
			break;
		case 4:
			cout << "Exiting.\n";
			break;
		default:
			cout << "Invalid choice. Try again.\n";
		}
	} while (choice != 4);

	return 0;
}
