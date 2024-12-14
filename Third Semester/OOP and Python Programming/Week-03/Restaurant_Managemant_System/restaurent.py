from menu import Menu

class Restaurent:
    def __init__(self, name):
        self.name = name
        self.employees = [] #Work as employees database
        self.menu = Menu()
    
    def add_employee(self, employee):
        self.employees.append(employee)
    
    def view_employee(self):
        print("All Employees: ")
        for emp in self.employees:
            print(emp.name, emp.email, emp.address, emp.phone, emp.designation)
