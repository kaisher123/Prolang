day = "Monday"   #Globol
def func1() :
   day = "Friday"
   print ("The day is ", day)
def func() :
   global day  #เพื่อเรียกใช้ day ที่เป็น Globol
   day = "Wednesday"
   print ("The day is ", day)
   #day = "Tuesday"
   #print ("The day is ", day)
func()  
func1()
print (day)
