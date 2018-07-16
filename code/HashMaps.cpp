Util::HashMap<String, uint32_t> hashMap =
    {{ "startup", 0xC0100020}, {"main", 0xC014F7C8}};

printf("Function 'main' is at 0x%08x\n", hashMap.get("main"));
