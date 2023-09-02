from my_package.model import ImageCaptioningModel
from my_package.model import ImageClassificationModel
from tkinter import *
from functools import partial
from PIL import ImageTk, Image
from tkinter import filedialog
import os


def fileClick():
    # Define the function you want to call when the filebrowser button (Open) is clicked.
    # This function should pop-up a dialog for the user to select an input image file.
    # To have a better clarity, please check out the sample video.
    global selected_lable
    global file_path
    output_label.grid_forget()
    global box
    box.delete(0, END)
    selected_lable.grid_forget()
    file_path = filedialog.askopenfile(
        mode='rb', initialdir="data/imgs", title="Choose Image", filetypes=[('Images', '*.jpg')])
    file_name = os.path.basename(file_path.name)
    box.insert(0, "Image - " + os.path.splitext(file_name)[0])
    img = Image.open(file_path)
    img.resize((640, 388))
    selected_img = ImageTk.PhotoImage(img)
    selected_lable = Label(root, image=selected_img)
    selected_lable.image = selected_img
    selected_lable.grid(row=1, column=0, columnspan=1)
    print("Opened", file_path.name)
    return

def process(clicked, captioner, classifier):
    # This function will produce the required output when 'Process' button is clicked.
    file_name = os.path.basename(file_path.name)
    global output_label
    if clicked.get() == "Image Captioning":
        if file_path is None:
            print("Please select an image file")
        else:
            box.delete(0, END)
            box.insert(0, "Captioning Image - "+os.path.splitext(file_name)[0])
            print("Captioning...")
            captions = captioner.__call__(file_path.name, 3)
            print(captions)
            output_label.grid_forget()
            output = "\nThese are the captions for the chosen image.\n\n"

            for i in range(len(captions)):
                # print(captions[i])
                output = output.upper()+ str(i + 1) +" :: " +captions[i].upper()
                output = output + "\n"
            output_label = Label(
                root, text=output, font='Helvetica 10 bold', border=2, relief="groove", wraplength=350)
            output_label.grid(row=1, column=1, columnspan=3, padx=5, pady=10, sticky=W, ipadx=10, ipady=5)
            box.delete(0, END)
            box.insert(0, "Captioning Done for Image - "+os.path.splitext(file_name)[0])
    elif clicked.get() == "Image Classification":
        if file_path is None:
            print("Please select an image file")
        else:
            box.delete(0, END)
            box.insert(0, "Classifying Image - "+os.path.splitext(file_name)[0])
            print("Classifying...")
            classes = classifier.__call__(file_path.name, 3)
            print(classes)
            output_label.grid_forget()
            output = "\nThese are the classes for the chosen image.\n\n"
            for i in range(len(classes)):
                # print(classes[i])

                # the output lable should only conatin 3 decimal places in the percentage
                percentage = classes[i][0]
                percentage = "{:.6f}".format(percentage)
                output = output.upper()+str(i+1)+" :: "+str(classes[i][1]).upper() + " -- " +  str(float(percentage)*100)+"%" + "\n"
            output_label = Label(root, text=output, font='Playfair 10 bold',border=2, relief="groove", wraplength=350)
            output_label.grid(row=1, column=1, columnspan=3,padx=5,pady=10, sticky=W,ipadx=10,ipady=5)
            box.delete(0, END)
            box.insert(0, "Classification Done for Image - "+os.path.splitext(file_name)[0])
    else:
        print("Please select a model")

    return


if __name__ == '__main__':
    # Complete the main function preferably in this order:
    # Instantiate the root window.
    # Provide a title to the root window.
    # Instantiate the captioner, classifier models.
    # Declare the file browsing button.
    # Declare the drop-down button.
    # Declare the process button.
    # Declare the output label.
    captioner = ImageCaptioningModel()
    classifier = ImageClassificationModel()

    root = Tk()
    root.title("LAVIS")
    photo = PhotoImage(file='iconfinder-technologymachineelectronicdevice02-4026456_113313.png')
    root.iconphoto(False, photo)
    output_label = Label(root)

    box = Entry(root, width=80, borderwidth=3)
    b_open = Button(root, text="Open", padx=30, pady=5,
                    command=lambda: fileClick())
    b_choose = Button(root, text="Model", padx=30, pady=5)
    clicked = StringVar()
    clicked.set("Models")
    drop = OptionMenu(root, clicked, "Image Captioning",
                      "Image Classification")
    b_process = Button(root, text="Process", padx=30, pady=5,
                       command=lambda: process(clicked, captioner, classifier))
    # output_label = Label(root, text="Output")
    # display the image name that is selected in the option menu
    # output_label.grid(row=1, column=1, columnspan=3)

    box.grid(row=0, column=0)
    b_open.grid(row=0, column=1)
    drop.grid(row=0, column=2)
    b_process.grid(row=0, column=3)

    selected_lable = Label(root, image=ImageTk.PhotoImage(
        Image.open('iconfinder-technologymachineelectronicdevice02-4026456_113313.png')))
    file_path = None

    # captioner = ImageCaptioningModel()
    root.resizable(False, False)
    mainloop()
