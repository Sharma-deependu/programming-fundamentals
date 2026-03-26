import tkinter as tk
from tkinter import ttk
win = tk.Tk()
win.title('Project 1 ')
# create label
name_label = ttk.Label(win,text= 'Enter your name :')
name_label.grid(row= 0, column= 0)
email_label  = ttk.Label(win,text= 'Enter your email:')
email_label.grid(row= 1, column= 0)
age_label = ttk.Label(win, text= 'Enter your age :')
age_label.grid(row= 2,column= 0)

# create entry box

name_var = tk.StringVar()
name_enterbox_ = ttk.Entry(win,width = 16 , textvariable= name_var)
name_enterbox_.grid(row= 0, column= 1)
email_var = tk.StringVar()
email_enterbox_ = ttk.Entry(win,width =16 , textvariable= email_var)
email_enterbox_.grid(row=1,column=1)

age_var = tk.StringVar()
age_enterbox_ = ttk.Entry(win, width=  16 , textvariable= age_var)
age_enterbox_.grid(row=2,column=1)

# create button

submit_button = ttk.Button(win, text='Submit')
submit_button.grid(row=3,column= 0)

win.mainloop()





win.mainloop()


