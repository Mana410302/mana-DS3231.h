Arduino: 1.6.5 (Mac OS X), TD: 1.24, Board: "Teensy 3.1, Serial, 96 MHz optimized (overclock), US English"

Build options changed, rebuilding all
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_I2C_ByVac.cpp: In constructor 'LiquidCrystal_I2C_ByVac::LiquidCrystal_I2C_ByVac(uint8_t)':
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_I2C_ByVac.cpp:41:14: warning: statement has no effect [-Wunused-value]
_polarity == NEGATIVE;
^
In file included from /Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:35:0:
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.h:157:1: warning: multi-line comment [-Wcomment]
//             |    |      0.1uF            |     \
^
In file included from /Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:35:0:
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp: In member function 'uint8_t LiquidCrystal_SR1W::clearSR()':
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:77:24: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
SR1W_ATOMIC_WRITE_LOW(srRegister, srMask);
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.h:293:79: note: in definition of macro 'SR1W_ATOMIC_WRITE_LOW'
#define SR1W_ATOMIC_WRITE_LOW(reg, mask) ATOMIC_BLOCK(ATOMIC_RESTORESTATE) { *reg &= ~mask; }
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:86:22: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
fio_bit reg_val = *srRegister;
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:95:5: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
*srRegister = bit_high;
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:96:5: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
*srRegister = bit_low;
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:101:4: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
*srRegister = bit_high;
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp: In member function 'uint8_t LiquidCrystal_SR1W::loadSR(uint8_t)':
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:139:24: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
fio_bit reg_val = *srRegister;
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:144:6: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
*srRegister = bit_low;
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:145:6: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
*srRegister = bit_high;
^
In file included from /Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:35:0:
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:151:26: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
SR1W_ATOMIC_WRITE_LOW(srRegister, srMask);
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.h:293:79: note: in definition of macro 'SR1W_ATOMIC_WRITE_LOW'
#define SR1W_ATOMIC_WRITE_LOW(reg, mask) ATOMIC_BLOCK(ATOMIC_RESTORESTATE) { *reg &= ~mask; }
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.cpp:158:27: error: invalid type argument of unary '*' (have 'fio_register {aka unsigned char}')
SR1W_ATOMIC_WRITE_HIGH(srRegister, srMask);
^
/Users/gyaresu/Documents/Arduino/libraries/LiquidCrystal/LiquidCrystal_SR1W.h:294:80: note: in definition of macro 'SR1W_ATOMIC_WRITE_HIGH'
#define SR1W_ATOMIC_WRITE_HIGH(reg, mask) ATOMIC_BLOCK(ATOMIC_RESTORESTATE) { *reg |= mask; }
^
Error compiling.

  This report would have more information with
  "Show verbose output during compilation"
  enabled in File > Preferences.
