#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 787707428
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned long long p_4, unsigned char p_6)
{
  unsigned long v_15;
  char v_13;
  signed char v_11;
  double v_9;
  short v;
  int result;
  v_15 = 4294948118UL;
  v_13 = (char)48;
  v_11 = (signed char)p_6;
  v = (short)-27681;
  result = (int)((unsigned long long)((int)p + (int)v_11) % 869936149368ULL + (unsigned long long)(
                 (unsigned long)(- v_13) - ! v_15));
  while ((unsigned long long)((int)p % ((result + result) + 782)) * - (
         p_4 << 46LL) > (unsigned long long)(~ (((int)p_6 * result) / -107))) {
    result = (int)v % -12;
    v_9 = -8.18046133042e-29;
    v = (short)(result + (int)(- v_9));
    result = (int)(- (! ((unsigned long long)p * 18446744072656981784ULL)));
  }
  while_0_break: ;
  return result;
}


