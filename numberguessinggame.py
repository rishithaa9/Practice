import random 

def number_guessing_game():
    number_to_guess =random.randint(1,100)

    attempts=0
    guessed_number=0
    while not guessed_number:
        try:
            userguess=float(input('enter tje number '))
            attempts+=1

            if userguess > number_to_guess:
                print("Try again its high")
            elif userguess< number_to_guess:
                print("Try again its low")
            else:
                guessed_number=True
        except ValueError:
            print('invalid')    
            
number_guessing_game()