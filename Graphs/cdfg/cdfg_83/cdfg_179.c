#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 507593527
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, short p_9, unsigned char p_21,
                  unsigned short p_25, long p_27)
{
  char v_29;
  signed char v_23;
  unsigned int v_19;
  unsigned int v_17;
  double v_15;
  double v_13;
  unsigned int v_11;
  unsigned short v_6;
  short v_4;
  float v;
  unsigned char result;
  v_29 = (char)75;
  v_19 = 30504U;
  v_13 = 912.392316817;
  v_6 = (unsigned short)2774;
  v_4 = (short)p_21;
  v = (float)p_25;
  if ((int)v_29 >= (int)p % -15075) {
    v_17 = (unsigned int)((int)((short)1.88498032386e+38) + (int)p_9) * v_19;
    v = (float)v_6;
    v_11 = (unsigned int)(-757070362LL >> ((long long)v & 63LL));
  }
  else {
    v_23 = (signed char)(((unsigned long)v_13 - 4294961326UL) % (unsigned long)(
                         ~ p_27 + 458L) ^ 32282UL);
    v_17 = (unsigned int)((unsigned long)(~ ((long)v_23 / -49859L)) / (unsigned long)(
                          ((unsigned int)((int)p_25 * 156) + 4294950114U / (unsigned int)(
                                                             (int)v_23 + 46)) + 603U));
    v_11 = (unsigned int)(! ((19274 + (int)v_4) - (int)p_21));
  }
  if (~ (v_17 - (unsigned int)(9 & (int)p_9)) == 64697U) {
    v_6 = (unsigned short)(18446744072819907564ULL / (unsigned long long)(
                           ~ ((int)p & (int)p_9) + 939));
    v_4 = (short)(- (! (~ v_6)));
    result = (unsigned char)(! (13092 / (((int)((short)v) + (int)v_4) + 154)));
  }
  else {
    v_15 = (double)(char)-86;
    v_13 = v_15;
    result = (unsigned char)((long long)(639555524U / ((v_11 << 15) + 215U)) - (
                             26LL & (long long)v_13));
  }
  return result;
}


