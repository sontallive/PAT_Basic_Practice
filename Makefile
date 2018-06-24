.PHONY: clean All

All:
	@echo "----------Building project:[ 1012 - Debug ]----------"
	@cd "1012" && "$(MAKE)" -f  "1012.mk"
clean:
	@echo "----------Cleaning project:[ 1012 - Debug ]----------"
	@cd "1012" && "$(MAKE)" -f  "1012.mk" clean
