import turtle 
wn = turtle.Screen() 
polygon = turtle.Turtle()

num_sides = input("Enter Number of sides of polygon: ")
side_length = input("Enter lenghth of sides of polygon: should be more than 0!!  ")
colors = input("Enter the color of side: example blue, green, white, ")

polygon.color(colors)              # make tess blue
polygon.pensize(3)                 # set the width of her pen


angle = 360.0 / num_sides 

for i in range(num_sides):
    polygon.forward(side_length)
    polygon.right(angle)
    
turtle.done()
