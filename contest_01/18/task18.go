package main

import "fmt"

func answ(n int) string {
  result := ""
  for n > 0 {
    n--
    s := n % 26
    result = string('A'+s) + result
    n /= 26
  }
  return result
}

func main() {
  var n int
  fmt.Scan(&n)
  fmt.Println(answ(n))
}