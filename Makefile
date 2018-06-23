.PHONY: clean All

All:
	@echo "----------Building project:[ 1005 - Debug ]----------"
	@cd "1005" && "$(MAKE)" -f  "1005.mk"
clean:
	@echo "----------Cleaning project:[ 1005 - Debug ]----------"
	@cd "1005" && "$(MAKE)" -f  "1005.mk" clean
