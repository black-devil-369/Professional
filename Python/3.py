import turtle
t = turtle.Turtle()
turtle.pensize(2)
turtle.shape("turtle")
turtle.bgcolor("black")
turtle.speed(0)
while(True):
    for i in range(5):
        for colors in ["purple", "red", "white", "yellow","blue"]:
            turtle.color(colors)
            turtle.circle(100)
            turtle.left(5)
turtle.hideturtle()
turtle.mainloop()