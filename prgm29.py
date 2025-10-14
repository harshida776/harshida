text=str(input("Enter a string: "))
result=text[0]+text[1:].replace(text[0],'$')
print("result:",result)
