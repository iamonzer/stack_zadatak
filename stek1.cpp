#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int Max = 10;

struct Bolnica {
    int id;
    string ime;
    string bolest;
};

struct stack {
    Bolnica* stak[Max];
    int top;
    int velicina = 0;
};

void CreateStack(stack* s) {
    s->top = -1;
}

bool isFull(stack* s) {
    if (s->top == Max - 1) {
        cout << "Stack je pun" << endl;
        return true;
    }
    else {
        cout << "Stack nije pun" << endl;
        return false;
    }
}

bool isEmpty(stack* s) {
    if (s->top == -1) {
        cout << "Stack je prazan" << endl;
        return true;
    }
    else {
        cout << "Stack nije prazan" << endl;
        return false;
    }
}

void push(stack* s, Bolnica* newitem) {
    if (isFull(s)) {
        cout << "Stack je pun" << endl;
    }
    else {
        s->top++;
        s->stak[s->top] = newitem;
        s->velicina++;
    }
}

void pop(stack* s) {
    if (isEmpty(s)) {
        cout << "Stack je prazan" << endl;
    }
    else {
        delete s->stak[s->top];
        s->top--;
        s->velicina--;
    }
}

void peek(stack* s) {
    if (isEmpty(s)) {
        cout << "Stack je prazan" << endl;
    }
    else {
        cout << "Karton na vrhu je: " << s->top << endl;
    }
}

int main() {
    stack* s = new stack;
    fstream bolnica;
    CreateStack(s);

    int opcija;

    do {
        cout << "Meni" << endl;
        cout << "1. Dodaj novi medicinski karton " << endl;
        cout << "2. Ukloni medicinski karton sa vrha stack-a " << endl;
        cout << "3. Ispisi sve medicinske kartone " << endl;
        cout << "4. Spremi trenutno stanje u dadoteku bolnica.txt " << endl;
        cout << "5. Izadi iz programa" << endl;
        cout << endl;
        cout << "Unesi opciju ";
        cin >> opcija;

        switch (opcija) {
        case 1: {
            Bolnica* osoba = new Bolnica;
            if (osoba == nullptr) {
                cout << "Memory allocation failed" << endl;
                break;
            }
            cout << "Unesi broj kartona: ";
            cin >> osoba->id;

            cout << endl;
            cout << "Unesi ime osobe: ";
            cin >> osoba->ime;
            cout << endl;
            cout << "Unesi bolest koju pacijent ima: ";
            cin >> osoba->bolest;
            cout << endl;
            cout << "Novi karon napravit" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Informacije o osobi: " << endl;
            cout << "Broj na stack-u: " << s->top << endl;
            cout << "Identifikacijski broj: " << osoba->id << endl;
            cout << "Ime: " << osoba->ime << endl;
            cout << "Bolest: " << osoba->bolest << endl;
            cout << endl;
            push(s, osoba);
            break;
        }

        case 2: {
    if (isEmpty(s)) {
        cout << "Stack je prazan" << endl;
    }
    else {
        cout << endl;
        cout << endl;
        cout << "Brisanje korisnika sa vrha stack-a" << endl;
        cout << "Uklonjena osoba sa stack-a: " << s->stak[s->top]->ime << endl;
    	Bolnica* osoba = s->stak[s->top];
		pop(s);
        
        delete osoba;
        cout << "Osoba uklonjena" << endl;
    }
    break;
}
		
		case 3:
			{
				if(isEmpty(s)){
					cout << "Baza podataka je prazna" << endl;
				}
				else{
				
				for(int i = 0; i < s->velicina; i++){
					cout << "Identifikacijski broj: " << s->stak[i]->id << endl;
					cout << "Ime: " << s->stak[i]->ime << endl;
					cout << "Bolest: " << s->stak[i]->bolest << endl;
					
					}
				}
				break;
			}
		
		
		case 4:
			{
				bolnica.open("bolnica.txt", ios::app);
				if(bolnica.is_open()){
					for(int i = 0; i < s->velicina; i++){
						bolnica << "Identifikacijski broj: " << s->stak[i]->id << endl;
						bolnica << "Ime: " << s->stak[i]->ime << endl;
						bolnica << "Bolest: " << s->stak[i]->bolest << endl;
					}
					bolnica.close();
					
				}
				bolnica.open("bolnica.txt", ios::in);
				cout << endl;
				cout << "Podaci spremljeni u dadoteku bolnica.txt" << endl;
				cout << endl;
				string line;
				cout << "Podaci koji su spremljeni u dadoteku su: " << endl;
				while(getline(bolnica,line)){
					cout << line << endl;
				}
				bolnica.close();
				break;
			}
		
        default:
            cout << "Nije tacna opcija" << endl;
        }
        
        
        
    } while (opcija != 5);

    while (!isEmpty(s)) {
        pop(s);
    }
    delete s;

    return 0;
}