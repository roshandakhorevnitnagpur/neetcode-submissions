def remove_fourth_character(word: str) -> str:
    first_string = word[0:3]
    second_string = word[4:]
    
    return first_string + second_string


# do not modify below this line
print(remove_fourth_character("NeetCode"))
print(remove_fourth_character("Hello"))
