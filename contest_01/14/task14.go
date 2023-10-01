package main

import (
 "fmt"
)

func main() {
 var n1, n2 int
 fmt.Scan(&n1, &n2)

 //first line
 fmt.Print("    |")
 for i := 0; i < n2; i++ {
  fmt.Printf(" %3d", i+1)
 }
 fmt.Println()
 //separator
 fmt.Print("   --")
 for i := 0; i < n2; i++ {
  fmt.Print("----")
 }
 fmt.Println()

 for i := 0; i < n1; i++ {
  fmt.Printf("%4d|", i+1)
  for j := 0; j < n2; j++ {
   fmt.Printf(" %3d", (i+1)*(j+1))
  }
  fmt.Println()
 }
}