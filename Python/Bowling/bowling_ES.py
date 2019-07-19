# bowling_ES.py
# CS 1400
# August 10 2018
# By: Easton Seidel
# This program will take user input for scores and names and sort the data in different ways. THen it will write it
# to a file

import sys

def main():

    players = playerInput()

    printOrig(players)

    highScore = maxScore(players)

    players = scoreName(players)

    perfectScore(players)

    messages(highScore)

    average(highScore)

    # Print everything out to a file
    with open('game_results.txt', 'w') as f:
        sys.stdout = f

        printOrig(players)

        highScore = maxScore(players)

        players = scoreName(players)

        perfectScore(players)

        messages(highScore)

        average(highScore)


def playerInput():
    # Get user input and put the players and scores in order

    players = []
    loop = True

    print("Welcome to Bowling! Please enter the players first name and score. \n")

    while loop == True:

        user = input()

        if user == "":

            loop = False

        else:

            players.append(user)

    return players


def printOrig(p):
    # Print the list in the order that it was entered

    print("Here are the scores as entered:")

    for i in p:

        print(i)

def scoreName(p):
    # Print the list according to the players name

    original = p
    high = []

    while original:
        minimum = original[0]
        for x in original:
            if x < minimum:
                minimum = x
        high.append(minimum)
        original.remove(minimum)

    print("Here are the scores sorted by name:")

    for p in high:

        print(p)

    return high

def perfectScore(p):
    # Test to see if there are any perfect scores and print who does

    for i in range(len(p)):
        n, perfect = p[i].split()

        if perfect == "300":

            new = "*" + n + " " + perfect
            p[i] = new

        else:

            new = " " + n + " " + perfect
            p[i] = new

    print("Players with a perfect score are marked with an asterisk:")

    for i in p:

        print(i)

def maxScore(p):
    # find the max score and print out the list in order from greatest to least

    max = []
    names = []
    scores = []

    # create separate lists

    for i in p:

        name, score = i.split()

        names.append(name)
        scores.append(score)

    # Sort the numbers
    while scores:
        minimum = scores[0]  # arbitrary number in list
        for x in scores:
            if x > minimum:
                minimum = x
        max.append(minimum)
        scores.remove(minimum)

    # add names back to numbers
    for j in range(len(max)):
        for l in p:
            if str(max[j]) in l:
                new = l
                max[j] = new

    print("Here are your scores from greatest to lowest:")

    for i in max:

        print(i)

    return max

def messages(m):
    # Print messages to winner and loser

    namewin, scorewin = m[0].split()

    print("Congratulations ", namewin, " You won with a score of ", scorewin)

    namelose, scorelose = m[int(len(m) - 1)].split()

    print("Better luck next time ", namelose, " Your score was ", scorelose)

def average(a):
    # Calculate the team average and print it on screen

    names = []
    scores = []
    total = 0
    length = len(a)

    for i in a:

        name, score = i.split()

        names.append(name)
        scores.append(score)

    for j in scores:

        j = int(j)

        total = total + j

    average = total / length

    print("The average of your scores is", round(average))


if __name__ == '__main__':
    main()