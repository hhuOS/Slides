#include <kernel/Module.h>

class Hello : public Module {
public:
    Hello() = default;
    int32_t initialize() override;
    int32_t finalize() override;
    String getName() override;
    Util::Array<String> getDependencies() override;
};
