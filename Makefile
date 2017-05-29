.PHONY: clean All

All:
	@echo "----------Building project:[ template-week-1 -  ]----------"
	@cd "template-week-1" && "$(MAKE)" -f  "template-week-1.mk"
clean:
	@echo "----------Cleaning project:[ template-week-1 -  ]----------"
	@cd "template-week-1" && "$(MAKE)" -f  "template-week-1.mk" clean
