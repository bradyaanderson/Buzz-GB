#include <iostream>

using namespace std;

/**
 * Header file for register implementation.
 *
 * Each block contains two 8-bit registers, then a simulated 16-bit register
 * created by joining the 8-bit registers together.
 *
 * There is a getter and setter for each register. The getters and setters for
 * the combined registers get and set based on what is contained in the 8-bit registers.
 * There are additionally two naturally 16-bit registers, pc and sp.
 */
class Registers {
public:
    // initialize register variables
    uint8_t reg_a, reg_b, reg_c, reg_d, reg_e, reg_f, reg_h, reg_l; // 8-bit
    uint16_t reg_sp, reg_pc;                                        // 16-bit

    // a, f, af
    [[nodiscard]] constexpr uint8_t a() const noexcept;

    void set_a(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint8_t f() const noexcept;

    void set_f(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint16_t af() const noexcept;

    void set_af(uint16_t value) noexcept;

    // b, c, bc
    [[nodiscard]] constexpr uint8_t b() const noexcept;

    void set_b(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint8_t c() const noexcept;

    void set_c(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint16_t bc() const noexcept;

    void set_bc(uint16_t value) noexcept;

    // d, e, de
    [[nodiscard]] constexpr uint8_t d() const noexcept;

    void set_d(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint8_t e() const noexcept;

    void set_e(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint16_t de() const noexcept;

    void set_de(uint16_t value) noexcept;

    // h, l, hl
    [[nodiscard]] constexpr uint8_t h() const noexcept;

    void set_h(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint8_t l() const noexcept;

    void set_l(uint8_t value) noexcept;

    [[nodiscard]] constexpr uint16_t hl() const noexcept;

    void set_hl(uint16_t value) noexcept;

    // sp, pc
    [[nodiscard]] constexpr uint16_t sp() const noexcept;

    void set_sp(uint16_t value) noexcept;

    [[nodiscard]] constexpr uint16_t pc() const noexcept;

    void set_pc(uint16_t value) noexcept;

    /*
    * Basic function to output all the data in all the registers.
    * Primarily for de-bugging purposes.
    */
    void dump_registers() {
        cout 
        << "a : " << hex << (uint32_t) registers.a() << endl
        << "f : " << hex << (uint32_t) registers.f() << endl
        << "af: " << hex << (uint32_t) registers.af() << endl
        << endl
        << "b : " << hex << (uint32_t) registers.b() << endl
        << "c : " << hex << (uint32_t) registers.c() << endl
        << "bc: " << hex << (uint32_t) registers.bc() << endl
        << endl
        << "d : " << hex << (uint32_t) registers.d() << endl
        << "e : " << hex << (uint32_t) registers.e() << endl
        << "de: " << hex << (uint32_t) registers.de() << endl
        << endl
        << "h : " << hex << (uint32_t) registers.h() << endl
        << "l : " << hex << (uint32_t) registers.l() << endl
        << "hl: " << hex << (uint32_t) registers.hl() << endl
        << endl
        << "sp: " << hex << (uint32_t) registers.sp() << endl
        << "pc: " << hex << (uint32_t) registers.pc() << endl;
    }
    
} registers;
