package main

import "fmt"

func main() {
 var a1, a2, a3 string
 fmt.Scan(&a1, &a2, &a3)
 if a1 == "���" {
  if a2 == "���" {
   if a3 == "���" {
    fmt.Print("���")
   } else {
    fmt.Println("�����")
   }
  } else {
   if a3 == "���" {
    fmt.Println("������")
   } else {
    fmt.Println("������")
   }
  }
 } else {
  if a2 == "���" {
   if a3 == "���" {
    fmt.Print("�������")
   } else {
    fmt.Println("�����������")
   }
  } else {
   if a3 == "���" {
    fmt.Print("�������")
   } else {
    fmt.Println("����")
   }
  }
 }
}