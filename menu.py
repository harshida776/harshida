while True:
    print("SELECTION MENU ")
    print("1. Word Count")
    print("2. Letter Frequency")
    print("3. Find Factors")
    print("4. Quit")
    choice = int(input("Select an option: "))

    if choice == 1:
        print("\nWORD COUNT ANALYSIS")
        text = input("Enter your text: ")
        word_list = text.split()
        unique_words = []
        word_counts = []

        for word in word_list:
            if word in unique_words:
                idx = unique_words.index(word)
                word_counts[idx] += 1
            else:
                unique_words.append(word)
                word_counts.append(1)

        for i in range(len(unique_words)):
            print(f"{unique_words[i]}: {word_counts[i]} times")

    elif choice == 2:
        print("\nLETTER FREQUENCY ANALYSIS")
        user_input = input("Enter a word: ")
        if not user_input.strip():
            print("Empty input detected.")
        else:
            words = user_input.split()
            for word in words:
                print(f"\nAnalyzing: {word}")
                letter_counts = {}
                for char in word:
                    char_lower = char.lower()
                    letter_counts[char_lower] = letter_counts.get(char_lower, 0) + 1
                for char, freq in letter_counts.items():
                    print(f"'{char}' appears {freq} time(s)")

    elif choice == 3:
        print("\nFACTOR CALCULATOR")
        num = int(input("Enter a number: "))
        print(f"Factors of {num}:")
        for i in range(1, num + 1):
            if num % i == 0:
                print(i, end=" ")

    elif choice == 4:
        print("CLOSING PROGRAM...")
        break

    else:
        print("Invalid option! Choose 1, 2, 3, or 4")
