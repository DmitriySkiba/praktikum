Student make_student(const std::string& line) {
    std::vector<Course> courses;
    std::string sline, name, group;
    size_t pos, k;
    
    Course course;
    std::string cur_name;
    int semester;
    bool finished, is_fin = false;


    sline = line;

    pos = sline.find(";");
    name = sline.substr(0, pos);
    sline = sline.substr(pos + 1);

    pos = sline.find(";");
    group = sline.substr(0, pos);
    sline = sline.substr(pos + 1);

    k = 0;
    while (!is_fin) {
        pos = sline.find(";");
        cur_name = sline.substr(0, pos);
        sline = sline.substr(pos + 1);

        pos = sline.find(";");
        semester = stoi(sline.substr(0, pos));
        sline = sline.substr(pos + 1);

        pos = sline.find(";");
        if (pos == -1) {
            pos = sline.length();
            finished = (stoi(sline.substr(0, pos)) > 0);
            is_fin = true;
        }
        else {
            finished = (stoi(sline.substr(0, pos)) > 0);
            sline = sline.substr(pos + 1);
        }
        course = Course{ cur_name, semester, finished };
        courses.insert(courses.end(), course);
        k++;
    }
    return { name, group, courses};
}


bool is_debtor(const Student& student, const int& d_semester, const int& d_max_debt) {
    
    std::vector<Course> courses;
    int k = 0;
    courses = student.courses;
    for (auto& course : courses) {
        if (course.semester < d_semester) {
            if (!course.finished) { k++; };
        }
     }
     if (k > d_max_debt) {
        return true;
     } else {
         return false;
     }
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
        std::cout << /*"group-" << */ cugroup << std::endl;
        for (const auto& student : students) {
            if (student.group != cugroup) {
                cugroup = student.group;
                std::cout /* << "group-" */<< cugroup << std::endl;
            }
            std::cout << "- " << student.name << std::endl;
        }
    }
}
