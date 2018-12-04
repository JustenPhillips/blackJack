# blackJack
C++ card game blackjack text
Blackjack
Requested files: Blackjack.cpp (Download)
Type of work: Individual work

In the card game named 'Blackjack' players get two cards to start with, and then they are asked whether or not they want more cards. Players can continue to take as many cards as they like. Their goal is to get as close as possible to a total of 21 without going over. Face cards have a value of 10.

Write a command line game that plays a simple version of blackjack. The program should generate random number between 1 and 10 each time the player gets a card. It should keep a running total of the players cards, and ask the player whether or not it should deal another card. Sample output for the game is written below. Your program should produce the same output. Your output message should contain the strings Win, Lose, Bust, Push, Blackjack depending on the combination of cards compared to a dealer hand of 18.

Submit a single file named Blackjack.cpp using the button below. You do not need to submit sample output. Just the source code.
Sample Output:

> First cards: 3, 2

> Total: 5

> Do you want another card? (y/n): y

> Card: 6

> Total: 11

> Do you want another card? (y/n): y

> Card: 7

> Total: 19

> Do you want another card? (y/n): n

> Win.

> Would you like to play again? (y/n): y

>

> First cards: 10, 2

> Total: 12

> Do you want another card? (y/n): y

> Card: 6

> Total: 18

> Do you want another card? (y/n): y

> Card: 7

> Total: 25

> Bust.

> Would you like to play again? (y/n): n


Clarifying Questions to Ask Yourself

When you are designing and implementing Blackjack you should consider:

    Are your random numbers really changing each time you run? If you don't set the seed for the random number generator you will pretty likely get the same values of cards every time.
    Does your output match the sample output as closely as possible? Computers are exact and unforgiving and variations in string contents and formatting can cause your program output to be rejected.
    Are you spraying newlines ("\n") everywhere? Does your input prompt wait at the end of the line or jump to the beginning of the next line? Things like this matter.
    Are the different outcomes clearly labeled with a recognizable string like: Bust, Lose, Push, Blackjack? One key goal of this exercise is to have output that clearly varies based on the evaluation of a group of items.
    Is your output buried in pretty text that looks like useless & confusing noise to the computer? 


Suggestion

Address the problem using an iterative approach. Start with a small amount of functionality, and then grow it gradually. This way you can compile and run your program after each statement that you write.

You might start by just generating a single card. The program execution might look like this:

> First card: 3

Then generate two cards

> First cards: 3, 2

Next add a variable to store the total, and a statement to show its value:

> First cards: 3, 2

> Total: 5

Next read in a user response and print out the value that was entered

> First cards: 3, 2

> Total: 5

> Do you want another card? (y/n): y

> You entered: y

Next you might add a loop, without yet adding the blackjack logic

> First cards: 3, 2

> Total: 5

> Do you want another card? (y/n): y

> Do you want another card? (y/n): y

> Do you want another card? (y/n): n

Now move the display of the total to the loop

> First cards: 3, 2

> Total: 5

> Do you want another card? (y/n): y

> Total: 5

> Do you want another card? (y/n): y

> Total: 5

> Do you want another card? (y/n): n

Your next steps might be something like this:

    Generate a new card in each loop and display the value
    Update the total in each loop.
    Check to see if the user busts in each loop
    Wrap the game in loop that handles the Play-Again functionality

Optional Extra Challenge (highly encouraged)

For extra practice, add a dealer to the game. There are two important blackjack rules to include:

    Dealers must take more cards as long as their total is less than 17
    If the player and dealer tie it is called a push. The player does not win or lose money.

Here is sample output below. Notice that I have the user input a 'c' to continue between dealer cards. That keeps some of the suspense of the game.

> The dealer starts with a 10

> Your first cards: 10, 10

> Total: 20

> hit? (y/n): n

> Dealers has a 10...

> (c to continue) c

> Dealer gets a 10

> Total: 20

> Push!

> play again? (y/n): y

>

> The dealer starts with a 10

> Your first cards: 5, 10

> Total: 15

> hit? (y/n): y

> Card: 5

> Total: 20

> hit? (y/n): n

> Dealers has a 10...

> (c to continue) c

> Dealer gets a 6

> Total: 16

> (c to continue) c

> Dealer gets a 5

> Total: 21

> Dealer Wins!

> play again? (y/n): n
