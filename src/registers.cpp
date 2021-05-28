#include "registers.h"

constexpr uint8_t Registers::a() const noexcept {
    return reg_a;
}

void Registers::set_a(uint8_t value) noexcept {
    reg_a = value;
}

constexpr uint8_t Registers::f() const noexcept {
    return reg_f;
}

void Registers::set_f(uint8_t value) noexcept {
    reg_f = value;
}

constexpr uint16_t Registers::af() const noexcept {
    return (reg_f << 8) | reg_a;
}

void Registers::set_af(uint16_t value) noexcept {
    reg_f = value >> 8;
    reg_a = value;
}

constexpr uint8_t Registers::b() const noexcept {
    return reg_b;
}

void Registers::set_b(uint8_t value) noexcept {
    reg_b = value;
}

constexpr uint8_t Registers::c() const noexcept {
    return reg_c;
}

void Registers::set_c(uint8_t value) noexcept {
    reg_c = value;
}

constexpr uint16_t Registers::bc() const noexcept {
    return (reg_c << 8) | reg_b;
}

void Registers::set_bc(uint16_t value) noexcept {
    reg_c = value >> 8;
    reg_b = value;
}

constexpr uint8_t Registers::d() const noexcept {
    return reg_d;
}

void Registers::set_d(uint8_t value) noexcept {
    reg_d = value;
}

constexpr uint8_t Registers::e() const noexcept {
    return reg_e;
}

void Registers::set_e(uint8_t value) noexcept {
    reg_e = value;
}

constexpr uint16_t Registers::de() const noexcept {
    return (reg_e << 8) | reg_d;
}

void Registers::set_de(uint16_t value) noexcept {
    reg_e = value >> 8;
    reg_d = value;
}

constexpr uint8_t Registers::h() const noexcept {
    return reg_h;
}

void Registers::set_h(uint8_t value) noexcept {
    reg_h = value;
}

constexpr uint8_t Registers::l() const noexcept {
    return reg_l;
}

void Registers::set_l(uint8_t value) noexcept {
    reg_l = value;
}

constexpr uint16_t Registers::hl() const noexcept {
    return (reg_l << 8) | reg_h;
}

void Registers::set_hl(uint16_t value) noexcept {
    reg_l = value >> 8;
    reg_h = value;
}

constexpr uint16_t Registers::sp() const noexcept {
    return reg_sp;
}

void Registers::set_sp(uint16_t value) noexcept {
    reg_sp = value;
}

constexpr uint16_t Registers::pc() const noexcept {
    return reg_pc;
}

void Registers::set_pc(uint16_t value) noexcept {
    reg_pc = value;
}

void Registers::dump_registers() {
    cout
            << "a : " << hex << (uint32_t) a() << endl
            << "f : " << hex << (uint32_t) f() << endl
            << "af: " << hex << (uint32_t) af() << endl
            << endl
            << "b : " << hex << (uint32_t) b() << endl
            << "c : " << hex << (uint32_t) c() << endl
            << "bc: " << hex << (uint32_t) bc() << endl
            << endl
            << "d : " << hex << (uint32_t) d() << endl
            << "e : " << hex << (uint32_t) e() << endl
            << "de: " << hex << (uint32_t) de() << endl
            << endl
            << "h : " << hex << (uint32_t) h() << endl
            << "l : " << hex << (uint32_t) l() << endl
            << "hl: " << hex << (uint32_t) hl() << endl
            << endl
            << "sp: " << hex << (uint32_t) sp() << endl
            << "pc: " << hex << (uint32_t) pc() << endl;
}
