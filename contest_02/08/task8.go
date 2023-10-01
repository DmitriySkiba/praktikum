import(
    "strings"
)
func isPalindrome(str string) bool {
    str = strings.ToLower(str) 
    normalizedStr := make([]rune, 0)
    for _, char := range str {
        if char >= 'a' && char <= 'z' || char >= '0' && char <= '9' {
            normalizedStr = append(normalizedStr, char)
        }
    }
    length := len(normalizedStr)
    for i := 0; i < length/2; i++ {
        if normalizedStr[i] != normalizedStr[length - i - 1] {
            return false
        }
    }
    return true
}