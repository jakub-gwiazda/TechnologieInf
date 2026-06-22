import sys


def usage():
    print("Available operations:")
    print("\ttoUpper")
    print("\ttoLower")
    print("\tCount")
    print()


def main():
    if len(sys.argv) < 2:
        usage()
        return

    operacja = sys.argv[1]
    argumenty = sys.argv[2:]

    if operacja == "toUpper":
        print("toUpper: ", end="")

        wynik = [slowo.upper() for slowo in argumenty]
        print(" ".join(wynik))
        return

    elif operacja == "toLower":
        print("toLower: ", end="")

        wynik = [slowo.lower() for slowo in argumenty]
        print(" ".join(wynik))
        return

    elif operacja == "Count":

        litery = sum(len(slowo) for slowo in argumenty)
        print(f"Count: {litery}")
        return

    else:

        usage()


if __name__ == "__main__":
    main()