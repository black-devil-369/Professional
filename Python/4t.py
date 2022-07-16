import turtle
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("red")
s.title("Jai Bhavani")
turtle.shape("turtle")
t.width(2)
t.speed(0)
col = ('yellow', 'pink', 'cyan')
for i in range(300):
    t.pencolor(col[i%3])
    t.forward(i*4)
    t.right(121)
turtle.mainloop()