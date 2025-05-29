import random # Import the 'random' module for generating random numbers
import sys    # Import 'sys' for exiting the program gracefully

def play_guessing_game():
    """
    Simulates a simple number guessing game.
    The player has a limited number of attempts to guess a secret number.
    """
    print("-" * 50)
    print("Welcome to the Ultimate Guessing Game!")
    print("-" * 50)

    # Define the range for the secret number
    min_num = 1
    max_num = 100
    secret_number = random.randint(min_num, max_num) # Generate a random integer
    
    # Define the number of attempts the player gets
    max_attempts = 7
    attempts_taken = 0

    print(f"I'm thinking of a number between {min_num} and {max_num}.")
    print(f"You have {max_attempts} attempts to guess it.")
    print("\nLet the guessing begin!")

    while attempts_taken < max_attempts:
        try:
            # Get player's guess
            guess_str = input(f"Attempt {attempts_taken + 1}/{max_attempts}: Enter your guess: ")
            
            # Check if the user wants to quit
            if guess_str.lower() == 'quit':
                print("\nExiting game. Thanks for playing!")
                sys.exit() # Exit the program
                
            guess = int(guess_str) # Convert input to an integer

            # Check if the guess is within the valid range
            if not (min_num <= guess <= max_num):
                print(f"Oops! Please guess a number between {min_num} and {max_num}.")
                continue # Skip to the next iteration of the loop without counting this attempt

            attempts_taken += 1 # Increment attempt counter only for valid guesses

            # Provide hints
            if guess < secret_number:
                print("Too low! Try a higher number.")
            elif guess > secret_number:
                print("Too high! Aim a little lower.")
            else:
                # Correct guess!
                print(f"\n🥳 Congratulations! You guessed the number {secret_number} correctly!")
                print(f"It took you {attempts_taken} attempts.")
                break # Exit the loop as the game is won

        except ValueError:
            print("Invalid input. Please enter a whole number, or 'quit' to exit.")
        except Exception as e:
            print(f"An unexpected error occurred: {e}")
            print("Restarting game or try again.")
            
    else: # This 'else' block executes if the while loop completes without a 'break' (i.e., attempts run out)
        print("\n----------------------------------------")
        print("Game Over! You've run out of attempts.")
        print(f"The secret number was: {secret_number}")
        print("Better luck next time!")
        print("----------------------------------------")

    play_again = input("\nDo you want to play again? (yes/no): ").lower()
    if play_again == 'yes':
        play_guessing_game() # Recursively call the game function to play again
    else:
        print("Thanks for playing! Goodbye.")

# Start the game
if __name__ == "__main__":
    play_guessing_game()# define punctuation
punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''

my_str = "Hello!!!, he said ---and went."

# To take input from the user
# my_str = input("Enter a string: ")

# remove punctuation from the string
no_punct = ""
for char in my_str:
   if char not in punctuations:
       no_punct = no_punct + char

# display the unpunctuated string
print(no_punct)

