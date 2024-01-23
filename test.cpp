#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

void process_course_requests() {
    // Read the number of student course requests
    int n;
    std::cin >> n;

    // Map to store the count of each course
    std::map<std::string, std::set<std::string>> course_requests;

    // Process each student course request
    for (int i = 0; i < n; ++i) {
        std::string first_name, last_name, course;
        std::cin >> first_name >> last_name >> course;

        // Combine first and last names to create a unique identifier for each student
        std::string student_id = first_name + " " + last_name;

        // Check if the course has already been requested by the current student
        if (course_requests[course].find(student_id) == course_requests[course].end()) {
            // If not, update the count for the course and mark the course as requested by the current student
            course_requests[course].insert(student_id);
        }
    }

    // Sort courses in lexicographical order (with digits sorted before letters)
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

    // Output the result
    for (const auto& course : sorted_courses) {
        std::cout << course << " " << course_requests[course].size() << std::endl;
    }
}

int main() {
    process_course_requests();
    return 0;
}
