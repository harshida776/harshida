num=(input("Enter a number:"))
numbr_str=num.split()
result=[]
for n in numbr_str:
    numr=int(n)
    if numr>100:
       result.append('over')
    else:
       result.append(numr)
print(result)
