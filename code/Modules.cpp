auto moduleLoader = Kernel::getService<ModuleLoader>();

auto file = File::open("/mod/hello.ko", "r");

moduleLoader->load(file);
