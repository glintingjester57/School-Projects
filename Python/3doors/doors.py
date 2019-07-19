# doors.py
# A program that will draw 3 doors. Select 1 and see if you win!
# by: Easton Seidel

from graphics import *
from button import *
from random import randrange

def main():

    door = [1,2,3,4]

    # Set up the window
    win = GraphWin("3 Doors", width=600, height=400)
    win.setCoords(0.0, 0.0, 4.0, 2.0)
    win.setBackground('white')

    # Draw the greeting
    greeting = Text(Point(2, 1.75), "Welcome! Pick a door to see if you win!")
    greeting.draw(win)

    # Draw the doors
    for x in range(1,4):
        door[x] = Button(win, Point(x, 1), .5, 1, "door " + str([x]))

    # Determine the winner
    winner = randrange(1,4)

    print(winner)

    if(win.getMouse() == door[winner]):
        greeting.setText("You Win!")
        if(winner == door[1]):
            door[1] = Rectangle(Point(.5, 1.5), Point(1.5, .5))
            door[1].setFill('green')
            door[1].redraw(win)

            greeting.redraw(win)
        elif (winner == door[2]):
            door[1] = Rectangle(Point(1.5, 1.5), Point(2.5, .5))
            door[1].setFill('green')
            door[1].redraw(win)

            greeting.redraw(win)
        elif (winner == door[3]):
            door[1] = Rectangle(Point(2.5, 1.5), Point(3.5, .5))
            door[1].setFill('green')
            door[1].redraw(win)

            greeting.redraw(win)
    else:
        greeting.setText("You Lose! The winning door is yellow")
        if (winner == door[1]):
            door[1] = Rectangle(Point(.5, 1.5), Point(1.5, .5))
            door[1].setFill('yellow')
            door[1].redraw(win)

            greeting.redraw(win)
        elif (winner == door[2]):
            door[1] = Rectangle(Point(1.5, 1.5), Point(2.5, .5))
            door[1].setFill('yellow')
            door[1].redraw(win)

            greeting.redraw(win)
        elif (winner == door[3]):
            door[1] = Rectangle(Point(2.5, 1.5), Point(3.5, .5))
            door[1].setFill('yellow')
            door[1].redraw(win)

            greeting.redraw(win)

    win.getMouse()

main()
