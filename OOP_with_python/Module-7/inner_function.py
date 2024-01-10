#function is a first class object
def double_decker():
    print('Starting the double decker')
    def inner_fun():
        print('inside the inner')
    return inner_fun
# print(double_decker())
# print(double_decker()())


def do_something(work):
    print('work started')
    # print(work)
    print(work)
    print('work ended')

# do_something(2)
do_something('I am busy')