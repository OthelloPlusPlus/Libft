ifeq	($(OS), Windows_NT)
    include $(shell cmd /C "where /r . config.mk")
else
    include $(shell find . -type f -name 'config.mk' | head -1)
endif

MKF_DIR = mkf

all: libft

libft:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk

norminette:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)miscellaneous.mk norm

norm: norminette

signature:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)miscellaneous.mk signature TIME=3 MAX=23

clean:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk clean

fclean:
	@$(RMFILE) .DS_Store
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk fclean

re:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk re

.PHONY: all clean fclean re\
		libft \
		norminette norm signature
