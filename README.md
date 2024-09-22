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

