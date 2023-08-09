# Setting defines based on OS
# OS	:= $(shell uname -s)

ifeq		($(OS), Windows_NT)
    # DELIM :=        $(shell echo \)
    DELIM :=        /
    DEVNULL :=		NUL
    RMFILE :=		del -Force -ErrorAction SilentlyContinue
    RMDIR :=		rmdir
    RMDIR_FLAGS :=	/S /Q
    STDOUT :=       echo
    TRUE :=         cmd /c exit 0

else ifeq	($(OS), Linux)
    DELIM := 		/
    DEVNULL :=		/dev/null
    RMFILE :=		rm -f
    RMDIR :=		find
    RMDIR_FLAGS :=	-type d -empty -delete
    STDOUT :=       printf

else ifeq	($(OS) ,Darwin)
    DELIM := 		/
    DEVNULL :=		/dev/null
    RMFILE :=		rm -f
    RMDIR :=		find
    RMDIR_FLAGS :=	-type d -empty -delete
    STDOUT :=       printf

else
    DELIM := 		/
    DEVNULL :=		/dev/null
    RMFILE :=		rm -f
    RMDIR :=		find
    RMDIR_FLAGS :=	-type d -empty -delete
    STDOUT :=       printf

endif

PRINT_OBJ_INTRO := true