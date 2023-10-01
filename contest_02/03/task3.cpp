bool compare(const std::string& a, const std::string& b){
    int count_a1 = std::count(a.begin(), a.end(), '1');
    int count_a0 = std::count(a.begin(), a.end(), '0');
    
    int count_b1 = std::count(b.begin(), b.end(), '1');
    int count_b0 = std::count(b.begin(), b.end(), '0');
    
    if(count_a1 > count_b1){
        return true;
    }
    else if(count_a1 == count_b1){
        if(count_a0 < count_b0){
            return true;
        }
        else if(count_a0 == count_b0){
            return a < b;
        }
    }
    
    return false;
}
