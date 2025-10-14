list1 = list(map(int, input("Enter first list of integers: ").split()))
list2 = list(map(int, input("Enter second list of integers: ").split()))
length=len(list)==len(list2)
if len(list1) == len(list2):
    print("Two string same length.")
else:
    print("Lists are of different lengths.",length)
if sum(list1) == sum(list2):
    print("Both lists sum to the same value."length)
else:
    print("Lists do not sum to the same value."length)
if common_values:
    print("Common values found in both lists:", common_values)
else:
    print("No common values between the lists.")
