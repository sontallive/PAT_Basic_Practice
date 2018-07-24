.PHONY: clean All

All:
	@echo "----------Building project:[ 1018 - Debug ]----------"
	@cd "1018" && "$(MAKE)" -f  "1018.mk"
clean:
	@echo "----------Cleaning project:[ 1018 - Debug ]----------"
	@cd "1018" && "$(MAKE)" -f  "1018.mk" clean
