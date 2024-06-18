import requests
import os
import sys
import zipfile
import shutil
import logging
import tkinter 
from tkinter import filedialog

def download_github_repo(owner, repo, output_path):
    try:
        url = f"https://github.com/{owner}/{repo}/archive/refs/heads/main.zip"
        response = requests.get(url)

        if response.status_code == 200:
            with open(output_path, 'wb') as file:
                file.write(response.content)
            print(f'Repository {repo} downloaded successfully!\n')
        else:
            print(f'Failed to download repository {repo}. Status code: {response.status_code}\n')
    except:
        print("Something went wrong 0_o")
        
def folderContainsUProject(folderPath):
    for filename in os.listdir(folderPath):
        if filename.endswith('.uproject'): return True
    return False

def RequestConfirmation():    
    confirmation = input('Do you want to extract the files? Y/N \n')
    if confirmation == 'Y' or confirmation == 'y':
        return True
    elif confirmation == 'N' or confirmation == 'n':
        return False
    else: RequestConfirmation()
    
def move_files(source, to):
    source_folder = os.path.join(source, to + '-main')
    abs_output_path = os.path.abspath(source)
    
    print('\nFiles moved:')
    
    for filename in os.listdir(source_folder):
        print(filename)
        source_file = os.path.join(source_folder, filename)
        destination_file = os.path.join(abs_output_path, filename)
        os.replace(source_file, destination_file)
        
def isStringEmpty(str):
    if len(str) == 0:
        return True
    else:
        return False
    
def main():
    
    owner = input('Repository owner:\n >>> ')
    if isStringEmpty(owner):
        owner = 'bumvolla'
        print('Defaulted to bumvolla\n')
        
    repo = input('Repository name:\n >>> ')
    if isStringEmpty(repo):
        repo = 'bumvolla.github.io'
        print('Defaulted to UnrealTools\n')
        
    try:
        window = tkinter.Tk().withdraw()
        
        uproject_path = os.path.abspath(filedialog.askdirectory(title="Select the Unreal project root directory"))
        
    except:
        raise ("Project folder path selection canceled")


    if os.path.isdir(uproject_path): #Specified path exists
        if folderContainsUProject(uproject_path): #Specified path is unreal project folder
            output_path = uproject_path + '\\Plugins\\' + repo #Unreal project plugins folder
            zip_file_path = output_path + '.zip'
            download_github_repo(owner, repo, zip_file_path)

        else:
            raise ("Given path is not a unreal project directory")
        
    else:
        raise ("Project folder path dont exist")



    if RequestConfirmation(): #Ask if user want to unzip
        if os.path.isdir(os.path.abspath(output_path)):
            shutil.rmtree(output_path)
    else:
        sys.exit()
        

    with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
                zip_ref.extractall(output_path)
    
    
    
    move_files(output_path, repo)
    print('\nFiles reorganized')
    
    os.rmdir(output_path + '\\' + repo + '-main')
    print('Garbage folder cleanded up')
    
    os.remove(zip_file_path)
    print('Downloaded zip file removed\n')
    
    input()


if __name__ == '__main__':
    main()
