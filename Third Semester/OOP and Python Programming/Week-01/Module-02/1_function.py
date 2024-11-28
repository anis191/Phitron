# Calculator using python function:
def calculator(n1,n2,op):
    match op:
        case '+':
            return n1+n2
        case '-':
            return n1-n2
        case '*':
            return n1 * n2
        case '/':
            return n1 / n2
        case '%':
            return n1 % n2
        case '**':
            return n1 ** n2
        case _:
            return False

n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))
op = input("Select operation(+,-,*,/,%,**): ")
ans = calculator(n1,n2,op)

if ans is False:
    print("Invalid operation sign")
else:
    print(ans)