# Base Structure for any Project
A structured base to start a organized development projects it was prepared for C programming language.


Directory Structure

app/
build/
debug/
doc/
doxygen/
inc/
lib/
obj/
release/
Resources/
scripts/
src/
tests/
utils/
.git/
  .gitignore
  LICENSE
  README.md
  addcommitpush
  

# Directories

        app: Used to store all specific application code.
      build: Store compiled binaries from source code, it is used for development and tests, it isn't a release version.
      debug: As a build but for debug purpose, it is an intermediary compiled binary, used for tests and debug stage.
        doc: Store documents about project development or documentos of hardware and software parts used into the project.
    doxygen: Store source code doxygen documentation generated from source code.
        inc: Store include header files.
        lib: Store libraries to be included at compile time.
        obj: Store intermediary compiled source code as object files and modules.        
    release: Store a release version of source code, after tests and debugs stage, it could have a release number control.
  Resources: Usefull source codes files to be included into de project, it reduces the work with macros, headers includes and automation of software design.
    scripts: Some scripts to automate the git commands, build project and some commom routines.
        src: Store almost source code with a builtin structure to organize itself.
      tests: Store test files and scripts to help on source code tests and debug.
      utils: Store many utilities tools that can be at binary format or another form of source code to help and improve development work.
       .git: A git directory to store commits and repository information.

# Files

     .gitignore: Many tags used by git to ignore C and C++ common unecessary directories and files from a commit by git command.
        LICENSE: License text and disclaimer.
      README.md: This text file to explain everything about the project and its structure.
  addcommitpush: A shell script to automate the process of add files to git, commit the source code and push all news to the repository in a utomated process.

