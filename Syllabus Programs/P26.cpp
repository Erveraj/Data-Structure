//Program No. 26: Program to Implement a Deque
#include <iostream>
using namespace std;

const int N = 5;
int dq[N], front = -1, rear = -1;

bool full() { return (front == 0 && rear == N - 1) || front == rear + 1; }

void insertFront(int x) {
	if (full()) { cout << "Deque is full\n"; return; }
	if (front == -1) front = rear = 0;
	else front = (front - 1 + N) % N;
	dq[front] = x;
}
void insertRear(int x) {
	if (full()) { cout << "Deque is full\n"; return; }
	if (front == -1) front = rear = 0;
	else rear = (rear + 1) % N;
	dq[rear] = x;
}
void deleteFront() {
	if (front == -1) { cout << "Deque is empty\n"; return; }
	cout << "Deleted: " << dq[front] << '\n';
	if (front == rear) front = rear = -1;
	else front = (front + 1) % N;
}
void deleteRear() {
	if (front == -1) { cout << "Deque is empty\n"; return; }
	cout << "Deleted: " << dq[rear] << '\n';
	if (front == rear) front = rear = -1;
	else rear = (rear - 1 + N) % N;
}

int main() {
	int choice, value;
	do {
		cout << "1.Insert front 2.Insert rear 3.Delete front 4.Delete rear 0.Exit: ";
		cin >> choice;
		switch (choice) {
			case 1: cin >> value; insertFront(value); break;
			case 2: cin >> value; insertRear(value); break;
			case 3: deleteFront(); break;
			case 4: deleteRear(); break;
		}
	} while (choice != 0);
	return 0;
}
