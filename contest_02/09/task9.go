import(
    "strconv"
)
func isLucky(number string) bool {
 if len(number) != 6 {
  return false
 }

 sum1 := 0
 sum2 := 0
 for i := 0; i < 3; i++ {
  digit, _ := strconv.Atoi(string(number[i]))
  sum1 += digit
 }

 for i := 3; i < 6; i++ {
  digit, _ := strconv.Atoi(string(number[i]))
  sum2 += digit
 }

 return sum1 == sum2
}