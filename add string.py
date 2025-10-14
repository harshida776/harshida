def add_string(str1):
    length=len(str1)
    if str1.endswith('ing'):
        str1 += 'ly'
    else:
        str1 += 'ing'
    return str1
a=str(input("Enter a string:"))
print(add_string(a)) 
