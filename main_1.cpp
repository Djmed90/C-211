// Last mini challenge # 6 Due Monday !!

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

void process_course_requests() {
    // Numbers of Students
    int n;
    std::cin >> n;

    // Map to store count of people in courses
    std::map<std::string, std::set<std::string>> course_requests;

    // choosing class input
    for (int i = 0; i < n; ++i) {
        std::string first_name, last_name, course;
        std::cin >> first_name >> last_name >> course;

        // Gives Student an ID so we wont have conflicting signups
        std::string student_id = first_name + " " + last_name;

        // CHeck if students is requesting the same course then if not it updates witht heir pick
        if (course_requests[course].find(student_id) == course_requests[course].end()) {
            course_requests[course].insert(student_id);
        }
    }

    // Sort courses with digits b4 letters this is possible du to #inlcude <algorithm>
    std::vector<std::string> sorted_courses;
    for (const auto& entry : course_requests) {
        sorted_courses.push_back(entry.first);
    }

    std::sort(sorted_courses.begin(), sorted_courses.end(), [](const std::string& a, const std::string& b) {
        if (std::isdigit(a[0]) && !std::isdigit(b[0])) {
            return true;
        }
        if (!std::isdigit(a[0]) && std::isdigit(b[0])) {
            return false;
        }
        return a < b;
    });

    for (const auto& course : sorted_courses) {
        std::cout << course << " " << course_requests[course].size() << std::endl;
    }
}

int main() {
    process_course_requests();
    return 0;
}
