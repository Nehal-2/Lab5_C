#include <stdio.h>
#include <ctype.h>

int StringLength(char string[]);
int NumOfWords(char string[], int StrLength);
int NumOfVowels(char string[], int StrLength);
int VowelFreq(char string[], char vowel);

int main() {
	int N = 100;
	char sentence[N];
	printf("Please type a sentence within 100 characters:\n");
	fgets(sentence, N, stdin); // reads a string with max length N from stdin (standard input - most likely the keyboard)
	
	int length = StringLength(sentence);
	int wordCount = NumOfWords(sentence, length);
	int vowelCount = NumOfVowels(sentence, length);
	char vowel[5] = {'a', 'e', 'i', 'u', 'o'};

	printf("The sentence (%s) is %d character(s) long.\n", sentence, length); 
	printf("Words: %d word(s).\n", wordCount);
	printf("Vowels: %d vowel(s).\n", vowelCount);	
	for (int i = 0; i < 5; i++) {
		printf("Frequency of '%c': %d.\n", vowel[i], VowelFreq(sentence, vowel[i]));

	}

	return 0;
}

int StringLength(char string[]) {
	int length = 0;
	while (string[length] != '\0') {
		length++;
	}
	// Remove the newline character if present
        if (string[length - 1] == '\n') {
                string[length - 1] = '\0';
                length--;
        }
	return length;
}

int NumOfWords(char string[], int StrLength) {
	int wordCount = 0;
	int withinWord = 0;

	for (int i = 0; i < StrLength; i++) {
	       if (!isspace(string[i]) && !withinWord) {
	       		wordCount++;
			withinWord = 1;
	       } else if (isspace(string[i])) {
       			withinWord = 0;
	       }
	}
	return wordCount;
}	

int NumOfVowels(char string[], int StrLength) {
	int vowelCount = 0;

	for (int i = 0; i < StrLength; i++) {
		char ch = tolower(string[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			vowelCount++;
	}
	return vowelCount;
}

int VowelFreq(char string[], char vowel) {
	int freqCount = 0;
	char lowerCase = tolower(vowel);

	for (int i = 0; string[i] != '\0'; i++) {
		if (tolower(string[i]) == lowerCase)
			freqCount++;
	}
	return freqCount;
}
