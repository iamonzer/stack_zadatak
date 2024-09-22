# Stack Zadatak - Medicinski Kartoni

## Opis

Ovaj projekat implementira jednostavan program za upravljanje medicinskim kartonima korišćenjem strukture podataka *stack*. Program omogućava dodavanje, uklanjanje, pregled i spremanje medicinskih kartona u datoteku.

## Funkcionalnosti

1. **Dodavanje medicinskog kartona**: Novi karton se dodaje na vrh stack-a.
2. **Uklanjanje medicinskog kartona**: Karton sa vrha stack-a se uklanja.
3. **Ispis svih kartona**: Prikazuje sve kartone sačuvane u stack-u.
4. **Spremanje podataka**: Podaci o kartonima se čuvaju u datoteku `bolnica.txt`.
5. **Izlazak iz programa**: Program se završava, a memorija se oslobađa.

## Struktura Projekta

- `Bolnica`: Struktura koja sadrži informacije o pacijentu (ID, ime, bolest).
- `stack`: Struktura koja implementira stack operacije za rad sa kartonima.

## Instalacija i Pokretanje

1. Klonirajte repozitorijum:
    ```bash
    git clone https://github.com/vas-korisnicki-repozitorijum/stack-zadatak.git
    ```
2. Kompajlirajte program:
    ```bash
    g++ -o stack_program stack_zadatak.cpp
    ```
3. Pokrenite program:
    ```bash
    ./stack_program
    ```

## Vremenska i Prostorna Složenost

- **Vremenska složenost** za sve osnovne operacije (*push*, *pop*, *peek*) je **O(1)** jer sve operacije pristupaju samo vrhu stack-a.
  
- **Prostorna složenost** je **O(n)**, gde je *n* maksimalan broj kartona (10 u ovom primeru). Prostorna složenost zavisi od broja elemenata pohranjenih u stack-u, a svaki element zauzima memorijski prostor za podatke o jednom pacijentu.

# Hash Tabela - Student i Knjige

## Opis

Ovaj projekat implementira **hash tabelu** za čuvanje informacija o studentima i broju posuđenih knjiga. Koristi jednostavnu funkciju heširanja kako bi se obezbedilo brzo dodavanje i pretraga podataka.

## Funkcionalnosti

1. **Dodavanje studenta**: Novi unos studenta sa ID brojem i brojem posuđenih knjiga.
2. **Ispis svih studenata**: Prikazuje sve studente i informacije o broju knjiga koje su posudili.
3. **Izlaz**: Zatvaranje programa.

## Struktura Projekta

- **Node**: Struktura koja čuva ključ (ID studenta), vrednost (broj posuđenih knjiga), i pokazivač na sledeći čvor u slučaju sudara u hash tabeli.
- **HashTable**: Struktura koja sadrži heš tabelu sa pokazivačima na listu čvorova (studente).

## Instalacija i Pokretanje

1. Klonirajte repozitorijum:
    ```bash
    git clone https://github.com/vas-korisnicki-repozitorijum/hash-tabela-zadatak.git
    ```
2. Kompajlirajte program:
    ```bash
    g++ -o hash_program hash_tabela_zadatak.cpp
    ```
3. Pokrenite program:
    ```bash
    ./hash_program
    ```

## Vremenska i Prostorna Složenost

### Vremenska Složenost

- **Dodavanje (addNode)**: 
    - Prosečna vremenska složenost za dodavanje elementa je **O(1)**, zahvaljujući heširanju.
    - U najgorem slučaju (kada postoji više sudara i svi elementi završe u istoj "kanti"), složenost je **O(n)**, gde je *n* broj elemenata u toj kanti.

- **Ispisivanje (printHashTable)**:
    - Prosečna vremenska složenost je **O(n)**, gde je *n* ukupan broj elemenata u tabeli, jer se svaki element mora proći jednom.

- **Heširanje (hashFunction)**:
    - Vremenska složenost same heš funkcije je **O(1)**, jer je jednostavna aritmetička operacija.

### Prostorna Složenost

- **Prostorna složenost**:
    - Prostorna složenost hash tabele je **O(n)**, gde je *n* broj elemenata, jer svaki čvor zauzima prostor za čuvanje ključa, vrednosti i pokazivača na sledeći čvor.

# Quick Sort

## Zaključak

Ovaj projekat implementira **Quicksort** algoritam za sortiranje niza celih brojeva. Quicksort je efikasan, rekurzivan algoritam za sortiranje, sa sledećim karakteristikama:

- **Vremenska složenost**:
  - Najbolji slučaj: `O(n log n)`
  - Prosečan slučaj: `O(n log n)`
  - Najgori slučaj: `O(n²)` (dešava se kada je pivot najslabije izabran, npr. kada je niz već sortiran)
  
- **Prostorna složenost**:
  - U najboljem i prosečnom slučaju: `O(log n)` (zahvaljujući rekurziji)
  - U najgorem slučaju: `O(n)` (zbog linearne dubine rekurzije)

Iako quicksort ima **O(n²)** vremensku složenost u najgorem slučaju, često je brži od drugih algoritama sortiranja kao što je **Merge sort**, zbog manjeg broja upotrebljenih resursa u prosečnom slučaju. 

Algoritam koristi "in-place" pristup, što znači da ne zahteva dodatni prostor za skladištenje kopija podataka, što ga čini efikasnim u pogledu memorije.


# Zaključak

Ovaj projekat implementira **Bubble Sort** algoritam za sortiranje niza celih brojeva. Bubble Sort je jednostavan algoritam za sortiranje koji funkcioniše poredeći susedne elemente i zamenjujući ih ako su u pogrešnom redosledu. Analiza performansi algoritma je sledeća:

- **Vremenska složenost**:
  - **Najbolji slučaj**: `O(n)` (kada je niz već sortiran)
  - **Najgori slučaj**: `O(n²)` (kada je niz potpuno obrnut)
  - **Prosečan slučaj**: `O(n²)`

- **Prostorna složenost**: `O(1)`  
  (Bubble Sort je in-place algoritam, što znači da ne zahteva dodatni prostor osim za privremene varijable)

Iako Bubble Sort ima jednostavnu implementaciju, nije efikasan za velike nizove zbog kvadratne vremenske složenosti u prosečnom i najgorem slučaju. Zbog toga se koristi uglavnom za edukativne svrhe ili za male skupove podataka.
