from school import School
from Person import Student,Teacher

class Subject:
    def __init__(self, name, teacher):
        self.name = name
        self.teacher = teacher  #teacher_object
        self.max_marks = 100
        self.pass_marks = 33
    
    def exam(self, students):   #students = List of all student
        for student in students:
            mark = self.teacher.evaluate_exam()
            student.marks[self.name] = mark
            student.subject_grade[self.name] = School.calculate_grade(mark)