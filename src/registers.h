#include <iostream>
#include <stdint.h>
using namespace std;

// #define a registers.a()

class {
    public:
        uint8_t reg_a, reg_b, reg_c, reg_d, reg_e, reg_f, reg_h, reg_l;
        uint16_t reg_sp, reg_pc;

        // a, f, af
        constexpr uint8_t a() const noexcept {
            return reg_a;
        }
        void set_a(uint8_t value) noexcept {
            reg_a = value;
        }
        constexpr uint8_t f() const noexcept {
            return reg_f;
        }
        void set_f(uint8_t value) noexcept {
            reg_f = value;
        }
        constexpr uint16_t af() const noexcept {
            return (reg_f << 8) | reg_a;
        }
        void set_af(uint16_t value) noexcept {
            reg_f = value >> 8;
            reg_a = value;
        }

        // b, c, bc
        constexpr uint8_t b() const noexcept {
            return reg_b;
        }
        void set_b(uint8_t value) noexcept {
            reg_b = value;
        }
        constexpr uint8_t c() const noexcept {
            return reg_c;
        }
        void set_c(uint8_t value) noexcept {
            reg_c = value;
        }
        constexpr uint16_t bc() const noexcept {
            return (reg_c << 8) | reg_b;
        }
        void set_bc(uint16_t value) noexcept {
            reg_c = value >> 8;
            reg_b = value;
        }

        // d, e, de
        constexpr uint8_t d() const noexcept {
            return reg_d;
        }
        void set_d(uint8_t value) noexcept {
            reg_d = value;
        }
        constexpr uint8_t e() const noexcept {
            return reg_e;
        }
        void set_e(uint8_t value) noexcept {
            reg_e = value;
        }
        constexpr uint16_t de() const noexcept {
            return (reg_e << 8) | reg_d;
        }
        void set_de(uint16_t value) noexcept {
            reg_e = value >> 8;
            reg_d = value;
        }

        // h, l, hl
        constexpr uint8_t h() const noexcept {
            return reg_h;
        }
        void set_h(uint8_t value) noexcept {
            reg_h = value;
        }
        constexpr uint8_t l() const noexcept {
            return reg_l;
        }
        void set_l(uint8_t value) noexcept {
            reg_l = value;
        }
        constexpr uint16_t hl() const noexcept {
            return (reg_l << 8) | reg_h;
        }
        void set_hl(uint16_t value) noexcept {
            reg_l = value >> 8;
            reg_h = value;
        }

        // sp, pc
        constexpr uint16_t sp() const noexcept {
            return reg_sp;
        }
        void set_sp(uint16_t value) noexcept {
            reg_sp = value;
        }
        constexpr uint16_t pc() const noexcept {
            return reg_pc;
        }
        void set_pc(uint16_t value) noexcept {
            reg_pc = value;
        }

} registers;

void dump_registers() {
    cout 
    << "a : " << (uint32_t) registers.a() << endl
    << "f : " << (uint32_t) registers.f() << endl
    << "af: " << (uint32_t) registers.af() << endl
    << endl
    << "b : " << (uint32_t) registers.b() << endl
    << "c : " << (uint32_t) registers.c() << endl
    << "bc: " << (uint32_t) registers.bc() << endl
    << endl
    << "d : " << (uint32_t) registers.d() << endl
    << "e : " << (uint32_t) registers.e() << endl
    << "de: " << (uint32_t) registers.de() << endl
    << endl
    << "h : " << (uint32_t) registers.h() << endl
    << "l : " << (uint32_t) registers.l() << endl
    << "hl: " << (uint32_t) registers.hl() << endl
    << endl
    << "sp: " << (uint32_t) registers.sp() << endl
    << "pc: " << (uint32_t) registers.pc() << endl;
}

