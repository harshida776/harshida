n=str(input("Enter the word:"))
vowels=[]
for ch in n:
    if ch in "aeiouAEIOU":
       vowels.append(ch)
print(vowels)
