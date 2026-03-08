#include <iostream>
#include <string>

int inputMarks(const std::string& subject) {
    int marks;
    std::cout << "Enter marks for " << subject << ": ";
    std::cin >> marks;
    return marks;
}

int main() {
    std::string scienceSubject = "Science";
    int scienceMarks = inputMarks(scienceSubject);
    
    std::string mathsSubject = "Maths";
    int mathsMarks = inputMarks(mathsSubject);
    
    std::string englishSubject = "English";
    int englishMarks = inputMarks(englishSubject);
    
    std::string sstSubject = "SST";
    int sstMarks = inputMarks(sstSubject);
    
    int totalMarks = scienceMarks + mathsMarks + englishMarks + sstMarks;
    
    float totalPercentage = (float)(totalMarks) / 320 * 100;

    std::string Rating = totalPercentage >= 90 ? "Excellent" : totalPercentage >= 80 ? "Good" : totalPercentage >= 70 ? "Average" : "Needs Improvement";
    
    std::cout << "Total Marks:" << totalMarks << std::endl;
    std::cout << "Total Percentage:" << totalPercentage << std::endl;
    std::cout << "Rating:" << Rating << std::endl;

    return 0;
}
