include $(shell find . -type f -name 'config.mk' | head -1)

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
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk fclean

re:
	@$(MAKE) -f $(MKF_DIR)$(DELIM)libft.mk re

.PHONY: all clean fclean re\
		libft \
		norminette norm signature
