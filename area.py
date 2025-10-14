def square(s):
    return s*s
def rectangle(l,b):
    return l*b
def triangle(b,h):
    return b*h/2
lambda_square=lambda s:s*s
side=int(input("Enter a side of square:"))
square(side)
print("Area of square:",lambda_square(side))

lambda_rectangle=lambda l,b:l*b
leng=int(input("Enter the length of rectangle:"))
brea=int(input("Enter the breadth of rectangle:"))
rectangle(leng,brea)
print("Area of rectangle:",lambda_rectangle(leng,brea))

lambda_triangle=lambda b,h:b*h/2
base=int(input("Enter a base of the triangle:"))
height=int(input("Enter a height of the triangle:"))
triangle(base,height)
print("Area of triangle:",lambda_triangle(base,height))

