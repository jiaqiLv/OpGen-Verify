import ast
import os


if __name__ == '__main__':
    folder_path = '/code/OpGen-Verify/code_generation/generate/c'
    file_names = []
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            file_names.append(file)
    print(len(file_names))