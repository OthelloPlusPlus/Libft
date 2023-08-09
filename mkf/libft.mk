ifeq	($(OS), Windows_NT)
    include $(shell cmd /C "where /r . config.mk")
    include $(shell cmd /C "where /r . colors.mk")
    INCL_HDR := $(shell for /r %%i in (*.h) do @echo -I %%~dpi\ | sort)
else
    include $(shell find . -type f -name 'config.mk' | head -1)
    include $(shell find . -type f -name 'colors.mk' | head -1)
    INCL_HDR :=	$(shell find . -type f -name '*.h' -exec dirname "{}" \; | \
					uniq | sed -e 's/^/-I/g')
endif

NAME :=	libft.a

CC :=	gcc
CFLAGS	+=	-Wall -Wextra -Werror
DEPFLAGS +=	-MMD -MF $(DEP_DIR)$(DELIM)$*.d

SRC_DIR :=	src
OBJ_DIR :=	obj
DEP_DIR :=	dep

OBJ_DIRS =	$(OBJ_DIR) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_ISCHAR) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_STRING) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_MEM) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_TO) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_ALLOC) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_PUT) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_LINKED_LIST) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_GNL) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_FT_PRINTF) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_NUMBER) \
			$(OBJ_DIR)$(DELIM)$(SRC_DIR_MISC)
DIRS =	$(OBJ_DIRS) \
		$(OBJ_DIRS:$(OBJ_DIR)%=$(DEP_DIR)%)

SRC =	$(SRC_MAIN) \
		$(SRC_ISCHAR:%.c=		$(SRC_DIR)$(DELIM)$(SRC_DIR_ISCHAR)$(DELIM)%.c) \
		$(SRC_STRING:%.c=		$(SRC_DIR)$(DELIM)$(SRC_DIR_STRING)$(DELIM)%.c) \
		$(SRC_MEM:%.c=			$(SRC_DIR)$(DELIM)$(SRC_DIR_MEM)$(DELIM)%.c) \
		$(SRC_TO:%.c=			$(SRC_DIR)$(DELIM)$(SRC_DIR_TO)$(DELIM)%.c) \
		$(SRC_ALLOC:%.c=		$(SRC_DIR)$(DELIM)$(SRC_DIR_ALLOC)$(DELIM)%.c) \
		$(SRC_PUT:%.c=			$(SRC_DIR)$(DELIM)$(SRC_DIR_PUT)$(DELIM)%.c) \
		$(SRC_LINKED_LIST:%.c=	$(SRC_DIR)$(DELIM)$(SRC_DIR_LINKED_LIST)$(DELIM)%.c) \
		$(SRC_GNL:%.c=			$(SRC_DIR)$(DELIM)$(SRC_DIR_GNL)$(DELIM)%.c) \
		$(SRC_FT_PRINTF:%.c=	$(SRC_DIR)$(DELIM)$(SRC_DIR_FT_PRINTF)$(DELIM)%.c) \
		$(SRC_NUMBER:%.c=		$(SRC_DIR)$(DELIM)$(SRC_DIR_NUMBER)$(DELIM)%.c) \
		$(SRC_MISC:%.c=			$(SRC_DIR)$(DELIM)$(SRC_DIR_MISC)$(DELIM)%.c) \
		

SRC_MAIN :=	

SRC_DIR_ISCHAR :=	ischar
SRC_ISCHAR	:=	ft_isalpha.c	ft_isdigit.c	\
				ft_isprint.c	ft_isascii.c	ft_isspace.c

SRC_DIR_STRING :=	string
SRC_STRING :=	ft_strlen.c		ft_strlcpy.c	ft_strlcat.c\
				ft_strchr.c		ft_strrchr.c	ft_strncmp.c\
				ft_strnstr.c	ft_strdup.c		ft_substr.c\
				ft_strjoin.c	ft_split.c		ft_strtrim.c\
				ft_strmapi.c	ft_striteri.c

SRC_DIR_MEM :=	mem
SRC_MEM :=	ft_memset.c		ft_bzero.c	ft_memcpy.c\
			ft_memmove.c	ft_memchr.c	ft_memcmp.c

SRC_DIR_TO :=	to
SRC_TO :=	ft_toupper.c		ft_tolower.c		ft_atoi.c		ft_itoa.c\
			ft_utoa_ultimate.c	ft_itoa_ultimate.c	ft_utoclock.c

SRC_DIR_ALLOC :=	alloc
SRC_ALLOC :=	ft_calloc.c	ft_realloc.c	ft_calloc_exit.c\
				ft_free.c	ft_free_array.c

SRC_DIR_PUT :=	put
SRC_PUT :=	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

SRC_DIR_LINKED_LIST := linked_list
SRC_LINKED_LIST :=	ft_lstnew.c		ft_lstadd_front.c	ft_lstadd_back.c\
					ft_lstsize.c	ft_lstlast.c\
					ft_lstdelone.c	ft_lstclear.c\
					ft_lstiter.c	ft_lstmap.c

SRC_DIR_FT_PRINTF :=	ft_printf
SRC_FT_PRINTF :=	ft_printf.c		ft_dprintf.c	ft_strprintf.c\
					ft_printf_utils.c\
					ft_printf_utils_convert_arg.c\
					ft_printf_utils_convert_string.c\
					ft_printf_utils_convert_string_fieldwidth.c\
					ft_printf_utils_convert_string_precision.c\
					ft_printf_utils_flag_struct.c

SRC_DIR_GNL :=	get_next_line
SRC_GNL :=	get_next_line.c

SRC_DIR_NUMBER :=	number
SRC_NUMBER :=	ft_lowest_num.c	ft_highest_num.c	ft_reduct_counter.c\
				ft_random.c		ft_difference.c		ft_sqrt.c

SRC_DIR_MISC :=	misc
SRC_MISC :=	ft_ilen.c			ft_ulen.c		ft_array_len.c\
			ft_check_project.c	ft_exit_msg.c

OBJ :=	$(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)
DEP :=	$(SRC:$(SRC_DIR)%.c=$(DEP_DIR)%.d)

all: $(DIRS) $(NAME)

$(NAME): $(OBJ)
	@$(STDOUT)	"\t$(C_DCYAN)Creating library $(C_CYAN)%s$(C_DCYAN)...$(C_RESET)\n"\
			"$(NAME)"
# Linking object files into static library
	@ar -rc $(NAME) $(OBJ) 2> $(DEVNULL)
	@$(STDOUT)	"$(CC_1UP)\t$(C_DGREEN)Static archive $(C_GREEN)%s$(C_DGREEN) created.$(C_RESET)\n"\
			"$(NAME)"

$(OBJ_DIR)$(DELIM)%.o: $(SRC_DIR)$(DELIM)%.c
	@$(STDOUT)	"$(CC_LINE)\t$(C_LBLUE)Compiling $(C_CYAN)%s$(C_LBLUE)...$(C_RESET)\n" $<
# Compiling object files
	@$(CC) $(CFLAGS) $(DEPFLAGS) $(INCL_HDR) -c $< -o $@
#	$(STDOUT)	"$(CC_1UP)\t$(C_DCHRT)Compiled $(C_CHRT)%s$(C_DCHRT).$(C_RESET)\n" $@ || \
	($(STDOUT)	"$(CC_1UP)\t$(C_DRED)Failed to compile $(C_RED)%s$(C_RESET)\n" $@ && exit 1)

-include $(DEP)

$(DIRS):
	@$(STDOUT)	"$(CC_LINE)$(C_DCYAN)Creating directory $(C_CYAN)%s$(C_DCYAN).$(C_RESET)\n"	$@
# Making missing directories
	@mkdir "$@" || $(TRUE)
	@$(STDOUT)	"$(CC_1UP)\t$(C_DCHRT)Created directory $(C_CHRT)%s$(C_DCHRT).$(C_RESET)\n" $@


clean:
	@$(STDOUT)	"$(CC_LINE)$(C_DORANGE)Removing object files...$(C_RESET)\n"
# Removing object files
#	@$(RMFILE) $(OBJ)
	@$(STDOUT)	"$(CC_1UP)$(C_DPURPLE)Object files removed.$(C_RESET)\n"
# Removing dependency files
	@$(STDOUT)	"$(CC_LINE)$(C_DORANGE)Removing dependency files...$(C_RESET)\n"
#	@$(RMFILE) $(DEP)
	@$(STDOUT)	"$(CC_1UP)$(C_DPURPLE)Dependency files removed.$(C_RESET)\n"

fclean: clean
	@$(STDOUT)	"$(CC_LINE)$(C_DORANGE)Removing empty directories...$(C_RESET)\n"
# Removing empty directories
	@$(RMDIR) $(DIRS) $(RMDIR_FLAGS) 2> $(DEVNULL) || true
	@$(STDOUT)	"$(CC_1UP)$(C_DPURPLE)Empty directories removed.$(C_RESET)\n"
# Removing Static archive
	@$(STDOUT)	"$(CC_LINE)$(C_DORANGE)Removing $(C_ORANGE)%s$(C_DORANGE)...$(C_RESET)\n"\
			$(NAME)
	@$(RMFILE) $(NAME)
	@$(STDOUT)	"$(CC_1UP)$(C_PURPLE)%s$(C_DPURPLE) removed.$(C_RESET)\n"\
			$(NAME)

re: fclean all

.PHONY: all clean fclean re
