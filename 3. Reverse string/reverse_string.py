input_string = input("Please enter your \"String\": ")

def get_reverse(input_string: str) -> str:
    i = 0
    j = len(input_string) - 1

    while(i < j) :
        if not input_string[i].isalnum() :
            i += 1
        elif not input_string[j].isalnum() :
            j -= 1
        else :
            temp = input_string[j]
            input_string[j] = input_string[i]
            input_string[i] = temp
    
    return input_string

reversed_string = get_reverse(input_string)

print(reversed_string)