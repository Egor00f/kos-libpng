if tup.getconfig("NO_FASM") ~= "" then return end
tup.rule("amd_temp_view.asm", "fasm %f %o " .. tup.getconfig("KPACK_CMD"), "AMDtemp")
