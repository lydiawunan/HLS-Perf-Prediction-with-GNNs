#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 200177978
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, short p_15[4])
{
  float v_12;
  unsigned short v_10;
  short v_8;
  double v_6;
  long long v_4;
  unsigned short v;
  signed char result;
  v_10 = (unsigned short)p_15[2];
  v_8 = (short)p;
  v_6 = (double)p;
  v_4 = (long long)p_15[1];
  v = (unsigned short)p_15[2];
  result = (signed char)p_15[1];
  while ((long long)((int)((short)(- ((double)v_4 - v_6))) / 20376) < v_4) {
    v_12 = (unsigned long long)v_10 % ((unsigned long long)v_8 * 18446744073709507285ULL + 345ULL);
    v_10 = (unsigned short)(-1 - (int)p_15[2]);
    v = (unsigned short)((long long)(6825 * (int)((short)-7228545024.f) + (int)v_12) - 
                         ((long long)p - -474162175LL) / (long long)(
                         (int)v_10 + 475));
    v_4 = (long long)((unsigned int)result & 4294908819U);
  }
  while_0_break: ;
  result = (signed char)((int)v - -189);
  return result;
}


