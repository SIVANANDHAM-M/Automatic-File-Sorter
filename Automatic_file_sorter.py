import os, shutil

path = r"C:/Users/Sivanandham/OneDrive/Desktop/automatic file sorter/"
file_name = os.listdir(path)
folder_names = ['java files','c files','class files','pdf files','jpg files','jpeg files','avif files']
for folder in folder_names:
    folder_path = os.path.join(path, folder)
    if not os.path.exists(folder_path):
        os.makedirs(folder_path)
for file in file_name:
    if os.path.isfile(os.path.join(path, file)):
        name, ext = os.path.splitext(file)
        if ext == ".java":
            shutil.move(os.path.join(path, file), os.path.join(path, "java files", file))
        elif ext == ".c":
            shutil.move(os.path.join(path, file), os.path.join(path, "c files", file))
        elif ext == ".class":
            shutil.move(os.path.join(path, file), os.path.join(path, "class files", file))
        elif ext == ".pdf":
            shutil.move(os.path.join(path, file), os.path.join(path, "pdf files", file))
        elif ext == ".jpg":
            shutil.move(os.path.join(path, file), os.path.join(path, "jpg files", file))
        elif ext == ".jpeg":
            shutil.move(os.path.join(path, file), os.path.join(path, "jpeg files", file))
        elif ext == ".avif":
            shutil.move(os.path.join(path, file), os.path.join(path, "avif files", file))
