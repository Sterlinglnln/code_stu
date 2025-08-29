secret_number = 42

number_of_guess = 0

# 玩家猜数字
user_guess = int(input("Please enter your guess number: "))

while user_guess != secret_number and number_of_guess < 5:
    print("Wrong guess, try again!")
    user_guess = int(input("Please enter your guess number: "))
    number_of_guess += 1

if user_guess == secret_number:
    print("Congratulations! You guessed it right.")
else:
    print("Sorry, you've used all your attempts. The secret number was:", secret_number)
