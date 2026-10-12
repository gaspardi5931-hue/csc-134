
# m4t2_turtles.py
# CSC 134 - M4T2 - Turtles
# Name: Ivan G.
# Date: 10/11/2026

import turtle

SIDES = 5
LENGTH = 85
REPEATS = 48
GROW = 1
COLORS = ["purple", "teal", "orange", "magenta"]

screen = turtle.Screen()
screen.bgcolor("white")

t = turtle.Turtle()
t.speed(0)

# Lines drawn = 48 * 5 = 240
length = LENGTH

for copy in range(REPEATS):
    t.pencolor(COLORS[copy % len(COLORS)])

    for side in range(SIDES):
        t.forward(length)
        t.left(360 / SIDES)

    t.left(360 / REPEATS)
    length = length + GROW

t.hideturtle()
turtle.done()
