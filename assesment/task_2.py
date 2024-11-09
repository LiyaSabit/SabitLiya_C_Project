def main():
    sequence = input("Bracket sequence: ")
    check(sequence)


def check(brackets):
    check_num_1 = 0
    check_num_2 = 0
    if brackets[0] == ']' or brackets[0] == ')':
        print("Incorrect")
        print("You need to start with opened brackets")
        return 0

    for i in brackets:
        if i == '[':
            check_num_1 += 1
        if i == '(':
            check_num_2 += 1
        if i == ']':
            check_num_1 -= 1
        if i == ')':
            check_num_2 -= 1

    if check_num_1 == 0 and check_num_2 == 0:
        print("Correct!")
        # print(check_num_1)
        # print(check_num_2)
    else:
        print("Incorrect!")
        if check_num_1 > 0:
            print(f"You have {check_num_1} unclosed square brackets")
        if check_num_2 > 0:
            print(f"You have {check_num_2} unclosed round brackets")
        if check_num_1 < 0:
            print(f"You have excess {check_num_1*(-1)} square brackets")
        if check_num_2 < 0:
            print(f"You have excess {check_num_2*(-1)} round brackets")


main()
