import random

sentence = raw_input("Please enter a setence: ").split()
out_sentence = ""
for word in sentence:
    word_length = len(word)
    if word_length > 3:
        temp_word = word[0]
        letter_bank = word[1 : word_length - 1]
        for x in range(word_length - 2):
            temp_letter = letter_bank[(int(random.random()*len(letter_bank))) - 1]
            letter_bank = letter_bank.replace(temp_letter, "", 1)
            temp_word += temp_letter
        temp_word += word[word_length - 1]
        out_sentence += temp_word + " "
    else:
        out_sentence += word + " "
print out_sentence
