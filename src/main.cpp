#include <iostream>
#include "registers.h"

int main() {
    std::cout << "Welcome to Buzz-GB!" << std::endl;
    Registers gb_registers{};

    gb_registers.set_a(0xab);
    gb_registers.set_f(0xcd);

    gb_registers.set_b(0xef);
    gb_registers.set_c(0xab);

    gb_registers.set_de(0x1234);

    gb_registers.set_hl(0x0000);

    gb_registers.set_sp(0x4444);
    gb_registers.set_pc(0x1000);

    gb_registers.dump_registers();
    return 0;
}
