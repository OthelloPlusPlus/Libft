# Setting defines based on OS

ifeq		($(OS), Windows_NT)
    # DELIM :=        $(shell echo \)
    DELIM :=        /
    DEVNULL :=		NUL
    RMFILE :=		del -Force -ErrorAction SilentlyContinue
    RMDIR :=		rmdir
    RMDIR_FLAGS :=	/S /Q
    STDOUT :=       echo
    TRUE :=         cmd /c exit 0

else ifeq   ($(shell uname), $(filter $(shell uname), Linux Darwin))
    DELIM := 		/
    DEVNULL :=		/dev/null
    RMFILE :=		rm -f
    RMDIR :=		find
    RMDIR_FLAGS :=	-type d -empty -delete
    STDOUT :=		printf
    TRUE :=			true

# else
#     DELIM := 		/
#     DEVNULL :=		/dev/null
#     RMFILE :=		rm -f
#     RMDIR :=		find
#     RMDIR_FLAGS :=	-type d -empty -delete
#     STDOUT :=       printf
#     TRUE :=         true

endif
