from tkinter import *
import tkinter.messagebox as tmsg
import re


def collect():
    inputValue = text.get("1.0", "end-1c")
    email = re.findall(r'[\w\.-]+@[\w\.-]+\.\w+', inputValue)
    for mail in email:
        print(f"Your email are as follows: {mail}")
        tmsg.showinfo("Emails", mail)


root = Tk()
root.geometry("644x500")
root.maxsize(400, 500)
root.title("Email Collector")
photo = PhotoImage(file="email.png")
root.iconphoto(False, photo)
# frame = Frame(root,bg="grey",borderwidth=7,relief="raised")
# frame.pack(fill="x")
label = Label(text="WELCOME TO EMAIL COLLECTOR",
              font="Helvetica 10 bold", pady="15")
label.pack()
photo = PhotoImage(file="email.png")
label1 = Label(image=photo)
label1.pack()
button = Button(text="COLLECT", font="comisansms 12 bold", command=collect)
button.pack(pady=30)
label2 = Label(text="TEXT AREA IS BELOW", font="lucida 10 bold")
label2.pack()
text = Text(root, font="lucida", relief="sunken")
text.pack()
root.mainloop()
