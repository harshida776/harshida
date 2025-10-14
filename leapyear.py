start=int(input("Enter start year:"))
end=int(input("Enter last year:"))
if start<end:
    print ("leap years between",start,"and",end,":" )
while start < end:
    if (0 == start % 4) and (0 != start % 100) or (0 == start % 400):
        print (start)
    start += 1

    
    









