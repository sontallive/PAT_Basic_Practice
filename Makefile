.PHONY: clean All

All:
	@echo "----------Building project:[ 1007 - Debug ]----------"
	@cd "1007" && "$(MAKE)" -f  "1007.mk"
clean:
	@echo "----------Cleaning project:[ 1007 - Debug ]----------"
	@cd "1007" && "$(MAKE)" -f  "1007.mk" clean
