package main

import "fmt"

func main() {
  var n int
  fmt.Scan(&n)
  count := 0
  for n != 1 {
    if n % 2 == 0 {
      n = n / 2
      count++
    } else {
      n = n*3 + 1
      count++
    }
  }
  fmt.Println(count)
}