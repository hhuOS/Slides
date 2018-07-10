auto moduleLoader = Kernel::getService<ModuleLoader>();

auto file = File::open("/mod/random.ko", "r");

moduleLoader->load(file);
