Student make_student(const std::string& line) {
    std::string name, group;
    size_t pos = line.find(";");
    name = line.substr(0, pos);
    group = line.substr(pos + 1);
    return { name, group };
}

bool is_upper(const Student& student1, const Student& student2) {
    if (student1.group == student2.group) {
        return student1.name < student2.name;
    }
    return student1.group < student2.group;
}

void print(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "Empty list!" << std::endl;
    }
    else {
        std::string cugroup = students[0].group;
        std::cout << cugroup << std::endl;
        for (const auto& student : students) {
            if (student.group != cugroup) {
                cugroup = student.group;
                std::cout << cugroup << std::endl;
            }
            std::cout << "- " << student.name << std::endl;
        }
    }
}