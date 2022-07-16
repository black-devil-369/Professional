import turtle
t = turtle.Turtle()
s = turtle.Screen()
s.title("Jai Bhavani")
turtle.mainloop()
turtle.speed(0)
col = ('yellow','cyan', 'pink','blue', 'orange')
for i in range(100):
    t.pencolor(col[i*3])
    t.forward(i*2)
    t.right(121)
turtle.mainloop()

