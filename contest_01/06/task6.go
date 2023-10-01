package main

import "fmt"

func main() {
 var n int
 fmt.Scan(&n)

 count := [5]int{0, 0, 0, 0, 0}
 kupuri := [5]int{5000, 1000, 500, 200, 100}

 ns := 0

 for i, kupur := range kupuri {
  for ns+kupur <= n {
   ns += kupur
   count[i]++
  }
 }

 fmt.Print(count[0], count[1], count[2], count[3], count[4])
}