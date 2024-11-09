def main():
    num = int(input("Enter a number: "))
    number(num)

    name = input("Enter a name: ")
    greeting(name)

    my_array = []
    size = int(input("What is the length of the array? "))
    for i in range(size):
        elem = int(input(f"Enter element {i + 1}: "))
        my_array.append(elem)
    multiples(my_array)


def number(num):
    if num > 7:
        print("Hello")


def greeting(name):
    if name == 'John':
        print(f"Hello, {name}")
    else:
        print("There is no such name")


def multiples(array):
    for elem in array:
        if elem % 3 == 0:
            print(elem)


main()
