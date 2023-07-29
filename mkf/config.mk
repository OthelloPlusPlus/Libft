# Setting defines based on OS
OS	:= $(shell uname -s)

ifeq		($(OS), Windows)
    DELIM := 		$(shell printf '\\')
    DEVNULL :=		NUL
    RMFILE :=		del /Q
    RMDIR :=		rmdir
    RMDIR_FLAGS :=	/S /Q

else ifeq	($(OS), Linux)
    DELIM := 		/
    DEVNULL :=		/dev/null
    RMFILE :=		rm -f
    RMDIR :=		find
    RMDIR_FLAGS :=	-type d -empty -delete

else ifeq	($(OS) ,Darwin)
    DELIM := 		/
    DEVNULL :=		/dev/null
    RMFILE :=		rm -f
    RMDIR :=		find
    RMDIR_FLAGS :=	-type d -empty -delete

else
    DELIM := 		/
    DEVNULL :=		/dev/null
    RMFILE :=		rm -f
    RMDIR :=		find
    RMDIR_FLAGS :=	-type d -empty -delete

endif

PRINT_OBJ_INTRO := true