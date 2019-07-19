from graphics import *
from random import randrange, random
import math


def run():
    width = 640
    height = 480
    win = GraphWin("Bouncing Ball", width, height)
    radius = 10

    # 1
    #  add code here to generate a random position
    # for the initial center of the ball inside the window

    cx = randrange(0,640)
    cy = randrange(0,480)
    ball = Circle(Point(cx, cy), radius)
    ball.setFill("black")
    ball.draw(win)

    # 2
    # add code here to generate a random angle
    # to use in setting dx and dy

    angle = random()
    dx = math.cos(angle)
    dy = math.sin(angle)

    # 3.
    # replace XXX's below with expressions or statements that will make the loop repeat
    # until the user presses "q" or "Q"
    run = True
    while run == True :
         time.sleep(.001)
         ball.move(dx,dy)

         quit = win.checkKey()

         if quit == "q":
             run = False

        # 4.
        # add code here to make the ball bounce off the
        # edges of the graphics window as it moves
         current = ball.getCenter()
         currentx = current.getX()
         currenty = current.getY()

         print(currentx)

         if currentx >= 640 or currentx <= 0:
            dx = dx * (-1)

         if currenty >= 480 or currenty <= 0:
             dy = dy * (-1)

    win.close()

run()