//Program No. 25: Program to Implement a Circular Queue
#include <iostream>
using namespace std;

const int N = 5;
int q[N], front = -1, rear = -1;

void enqueue(int x) {
	if ((rear + 1) % N == front) cout << "Queue full\n";
	else {
		if (front == -1) front = 0;
		rear = (rear + 1) % N;
		q[rear] = x;
	}
}

void dequeue() {
	if (front == -1) cout << "Queue empty\n";
	else {
		cout << "Removed: " << q[front] << '\n';
		if (front == rear) front = rear = -1;
		else front = (front + 1) % N;
	}
}

void display() {
	if (front == -1) { cout << "Queue empty\n"; return; }
	for (int i = front;; i = (i + 1) % N) {
		cout << q[i] << ' ';
		if (i == rear) break;
	}
	cout << '\n';
}

int main() {
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	dequeue();
	display();
	return 0;
}
