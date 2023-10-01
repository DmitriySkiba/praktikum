package main

import "fmt"

func main() {
 var n int
 fmt.Scan(&n)

 num := make([]float64, n)
 fmt.Scan(&num)
 for i := 0; i < n; i++ {
  fmt.Scan(&num[i])
 }

 num1 := make([]float64, 0, n)
 num1 = append(num1, num[0])

 for i := 1; i < n-1; i++ {
  num1 = append(num1, (num[i-1]+num[i]+num[i+1])/3)
 }

 num1 = append(num1, num[n-1])
 for i:= 0 ; i < n ; i++{
 	fmt.Print(float64(num1[i])," ")}
}