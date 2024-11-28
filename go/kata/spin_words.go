package kata

import "strings"

func SpinWords(str string) string {
	words := strings.Split(str, " ")
	var result string
	for _, word := range words {
		if len(word) >= 5 {
			word = reverseWord(word)
		}
		result += word + " "
	}
	return result[:len(result)-1]
}

func reverseWord(word string) string {
	var reversed string
	for i := len(word) - 1; i >= 0; i-- {
		reversed += string(rune(word[i]))
	}
	return reversed
}
