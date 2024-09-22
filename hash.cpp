#include <iostream>
#include <string>

using namespace std;

struct Node {
    int key;
    int value;
    Node* next;
};

struct HashTable {
    int size;
    Node** table;
};

void initHashTable(HashTable* ht, int size) {
    ht->size = size;
    ht->table = new Node*[size];
    for (int i = 0; i < size; i++) {
        ht->table[i] = NULL;
    }
}

int hashFunction(int key, int size) {
    return (3 * key + 1) % size;
}

void addNode(HashTable* ht, int key, int value) {
    int index = hashFunction(key, ht->size);
    Node* newNode = new Node();
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    if (ht->table[index] == NULL) {
        ht->table[index] = newNode;
    } else {
        Node* current = ht->table[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printHashTable(HashTable* ht) {
    for (int i = 0; i < ht->size; i++) {
        Node* current = ht->table[i];
        while (current != NULL) {
            cout << "ID: " << current->key << ", Broj Knjiga: " << current->value << endl;
            current = current->next;
        }
    }
}

int main() {
    HashTable ht;
    initHashTable(&ht, 10);

    int choice;
    do {
        cout << "Meni:" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Ispisi sve studente" << endl;
        cout << "3. Izlaz iz menija" << endl;
        cout << "Unesite izbor: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int key, value;
                cout << "Unesite ID broj studenta: ";
                cin >> key;
                cout << "Unesite broj posudenih knjiga: ";
                cin >> value;
                addNode(&ht, key, value);
                break;
            }
            case 2:
                printHashTable(&ht);
                break;
            case 3:
                cout << "Izlaz iz programa." << endl;
                return 0;
            default:
                cout << "Nepostojeći izbor. Molimo, pokusajte ponovo." << endl;
        }
    } while (choice != 3);

    return 0;
}