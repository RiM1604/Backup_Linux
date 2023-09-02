from my_package.model import ImageCaptioningModel
from my_package.model import ImageClassificationModel
from tkinter import *
from functools import partial
from PIL import ImageTk, Image
from tkinter import filedialog


def fileClick(clicked):
    global img_
    global filepath
    # Define the function you want to call when the filebrowser button (Open) is clicked.
    # This function should pop-up a dialog for the user to select an input image file.
    # To have a better clarity, please check out the sample video.

    if process_label is not None:
        process_label.grid_forget() 
    process
    root.filename = filedialog.askopenfilename(initialdir="Python_Tkinter_Assignment/data/imgs", title ="Select an Image", filetypes= (("jpg files","*.jpg"),("all files", "*.*")))
    filepath = str(root.filename)
    reimg_= Image.open(root.filename)
    reimg_.resize((1000,1000))
    img_ = ImageTk.PhotoImage(reimg_)
    img_label= Label(root, image = img_)
    img_label.grid(row =1 , column=0)

def process(clicked, captioner, classifier):
    global process_label

    if process_label is not None:
        process_label.grid_forget()

    if filepath== None:
        messagebox.showinfo("Not Valid", "Select an Image")
    elif not clicked=="Select":
        process_label= Label(root, text ="Image Processed", padx = 25)
        process_label.grid(row=1, column=1, columnspan=3)
    else :
        messagebox.showinfo("Not Valid", "Please select a method")
    # This function will produce the required output when 'Process' button is clicked.
    # Note: This should handle the case if the user clicks on the `Process` button without selecting any image file.


if __name__ == '__main__':
    root = Tk()
    root.title("Image Processing and Captioning")

    e= Entry(width = 50)
    e.grid(row=0, column =0)
    # Complete the main function preferably in this order:
    # Instantiate the root window.
    # Provide a title to the root window.
    # Instantiate the captioner, classifier models.
    # Declare the file browsing button.
    # Declare the drop-down button.
    # Declare the process button.
    # Declare the output label.

    filepath=None
    process_label=None


    choice = StringVar()
    choice.set("Select")

    drop = OptionMenu(root, choice , "Image Classification", "Image Processing")
    drop.grid(row=0, column=2)
    
    captioner = ImageCaptioningModel()
    classifier = ImageClassificationModel()
    


           
    process_button = Button(root, text="Process", command= lambda: process(choice.get()))
    process_button.grid(row=0 ,column =3)
    choice_button = Button(root, text = "Open Image", command= lambda:fileClick(choice.get()))
    choice_button.grid(row=0, column=1)
