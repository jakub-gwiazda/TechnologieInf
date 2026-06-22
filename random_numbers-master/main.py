import random

def main():
    try:
        amount = int(input("Numbers amount: "))
        n_min = int(input("Range from: "))
        n_max = int(input("Range to: "))
    except ValueError:
        print("Proszę podać poprawne liczby całkowite.")
        return

    print(f"You have choosen {amount} numbers in range form {n_min} to {n_max}")

    tablica = []


    for i in range(amount):
        los = random.randrange(n_min, n_max)
        tablica.append(los)

    for i, liczba in enumerate(tablica, start=1):
        print(f"los{i}: {liczba}")

if __name__ == "__main__":
    main()