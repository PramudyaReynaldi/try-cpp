#include <iostream>
#define SIZE 5

using namespace std;

class CircularQueue {
private:
    int items[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    bool isFull() {
        if ((front == 0 && rear == SIZE - 1) || (rear == front - 1))
            return true;
        else
            return false;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Antrian penuh. Tidak dapat menambahkan elemen." << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = value;
        cout << "Elemen " << value << " ditambahkan ke dalam antrian." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak dapat menghapus elemen." << endl;
            return;
        }
        cout << "Elemen yang dihapus: " << items[front] << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Antrian kosong." << endl;
            return;
        }
        cout << "Isi Antrian: ";
        int i = front;
        while (i != rear) {
            cout << items[i] << " ";
            i = (i + 1) % SIZE;
        }
        cout << items[i] << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(6);
    q.enqueue(7);

    q.display();

    q.enqueue(8);

    return 0;
}
