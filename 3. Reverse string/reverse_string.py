input_str = input("Please enter your \"String\": ")

def swap_str(input_str: str, i: int, j: int) -> str:
    swapped_str = ""
    iterator = 0
    str_iterator = len(input_str) - 1
    while(iterator <= str_iterator) :
        if iterator == i :
            swapped_str += input_str[j]
            iterator += 1
        elif iterator == j :
            swapped_str += input_str[i]
            iterator += 1
        else :
            swapped_str += input_str[iterator]
            iterator += 1
    return swapped_str

def get_reverse(input_string: str) -> str:
    reversed_str = input_string
    i = 0
    j = len(input_string) - 1

    while(i < j) :
        if not input_string[i].isalnum() :
            i += 1
        elif not input_string[j].isalnum() :
            j -= 1
        else :
            reversed_str = swap_str(reversed_str, i, j)
            i += 1
            j -= 1
    
    return reversed_str

reversed_str = get_reverse(input_str)

print(reversed_str)