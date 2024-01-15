func printTypes(data []interface{}) {
    for _, v := range data {
        switch v.(type) {
        case int:
            fmt.Print("int ")
        case string:
            fmt.Print("string ")
        case Human:
            fmt.Print("Human ")
        case *Human:
            fmt.Print("*Human ")
        default:
            fmt.Print("interface ")
        }
    }
}