package main

import "fmt"
//test

func main() {
 var a1, a2, a3 string
 fmt.Scan(&a1, &a2, &a3)
 if a1 == "Нет" {
  if a2 == "Нет" {
   if a3 == "Нет" {
    fmt.Print("Кот")
   } else {
    fmt.Println("Жираф")
   }
  } else {
   if a3 == "Нет" {
    fmt.Println("Курица")
   } else {
    fmt.Println("Страус")
   }
  }
 } else {
  if a2 == "Нет" {
   if a3 == "Нет" {
    fmt.Print("Дельфин")
   } else {
    fmt.Println("Плезиозавры")
   }
  } else {
   if a3 == "Нет" {
    fmt.Print("Пингвин")
   } else {
    fmt.Println("Утка")
   }
  }
 }
}