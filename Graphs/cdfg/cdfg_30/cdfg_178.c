#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 750832437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned short p_17, long long p_19)
{
  signed char v_21;
  float v_15;
  short v_12;
  unsigned char v_10;
  unsigned int v_8;
  unsigned short v_6;
  long long v_4;
  unsigned short v;
  unsigned int result;
  v_21 = (signed char)85;
  v_15 = 328.99887085f;
  v_12 = (short)p_19;
  v_10 = (unsigned char)54;
  v_8 = (unsigned int)p_19;
  v_6 = (unsigned short)35646;
  v_4 = 516380951LL;
  v = (unsigned short)5217;
  result = (unsigned int)p_19;
  if ((~ p_19 * (long long)((int)((signed char)v_15) + (int)v_21)) / (
      p_19 + 667LL) == (long long)((unsigned long)((result >> (result & 31U)) - (unsigned int)(
                                                   (int)v_6 * 32)) % (
                                   (unsigned long)(- v_21) * ! p + 423UL))) {
    v_10 = (unsigned char)(p % ((unsigned long)((double)(- p_19) - 5.3991662332 / (
                                                                   (double)v_21 + 44.)) + 363UL));
    v_8 = (unsigned int)(((unsigned long)result + (unsigned long)v_10 % (
                                                  p + 783UL)) / (unsigned long)(
                         ((result - 112U) + (unsigned int)(! p_17)) + 239U));
    v_6 = (unsigned short)(-2.3624847266e+38f + v_15 / 3989187328.f);
  }
  else {
    v = (unsigned short)(-4935 % ((int)v_12 + 389));
    v_4 = p_19;
    result = (unsigned int)(18446744073436573534ULL % (unsigned long long)(
                            - (3568918418UL | (unsigned long)p_17) + 96UL));
  }
  while (! ((long long)v * (v_4 | 7LL)) <= (long long)(! ((unsigned int)-2.68689505028e+37 & 
                                                          (unsigned int)v_6 / (
                                                          v_8 + 268U)))) {
    v = (int)v_10;
    v_12 = (short)(((long long)(~ p) * ((long long)p / (v_4 + 481LL))) * (long long)(! (
                   (unsigned long)v_8 - p)));
    v = (unsigned short)((unsigned int)(- v_12) / (((unsigned int)((int)v_12 % 106) & (
                                                    v_8 - (unsigned int)v)) + 31U));
    v = (unsigned short)(! (((int)v % 9) % ((int)v_12 + 151)));
  }
  while_0_break: ;
  return result;
}


