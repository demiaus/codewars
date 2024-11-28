package kata

func Alphanumeric(str string) bool {

	for _, c := range str {
		if !(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && !(c >= '0' && c <= '9') {
			return false
		}
	}
	return str != ""
}
