#include <iostream>

using namespace std;

/**
 * Header file for register implementation.
 *
 * Each block contains two 8-bit registers, then a simulated 16-bit register
 * created by joining the 8-bit registers together.
 *
 * There is a getter and setter for each register. The getters and setters for
 * the combined registers get and set based on what is contained in the 8-bit 
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
    void dump_registers();
};
