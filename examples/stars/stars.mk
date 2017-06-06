$(PROGRAM_DOS16_DIR)/stars.exe : stars/stars.c $(LIB_DOS16)
	$(MKDIR) $(PROGRAM_DOS16_DIR) $(OBJ_DOS16_DIR)
	$(CC_DOS16) $(CPPFLAGS) $(CFLAGS_DOS16) $< -fe=$@ -fo=$(OBJ_DOS16_DIR)/$^&.obj -fr=$(OBJ_DOS16_DIR)/$^&.err

$(PROGRAM_DOS32_DIR)/stars.exe : stars/stars.c $(LIB_DOS32)
	$(MKDIR) $(PROGRAM_DOS32_DIR) $(OBJ_DOS32_DIR)
	$(CC_DOS32) $(CPPFLAGS) $(CFLAGS_DOS32) $< -fe=$@ -fo=$(OBJ_DOS32_DIR)/$^&.obj -fr=$(OBJ_DOS32_DIR)/$^&.err

