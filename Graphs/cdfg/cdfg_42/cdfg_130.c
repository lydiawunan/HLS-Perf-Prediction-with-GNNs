#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 53615172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, long p_4, char p_13, unsigned int p_15,
                unsigned short p_17[4])
{
  float v_19;
  unsigned short v_11;
  long long v_9;
  unsigned long v_7;
  long v;
  signed char result;
  v_19 = 1405426816.f;
  v_11 = (unsigned short)21385;
  v_9 = -13264LL;
  v_7 = 4239984776UL;
  v = p_4;
  result = (signed char)p_15;
  while (125UL < (unsigned long)(! (4294967289U / (p_15 + 554U))) * ~ (! v_7)) {
    v_11 = (unsigned long)v_19 / 165950139UL;
    result = (signed char)75;
    v_19 = (float)((p_15 | 56099U) + (unsigned int)(3.03756976529e+38 / (
                                                    (double)p_17[3] + 104.))) - -8058299392.f;
    v_7 = (unsigned long)(- v_19);
  }
  while_0_break: ;
  while ((unsigned long)-8487929344.f != (unsigned long)((unsigned int)p / 4294951589U ^ (unsigned int)(~ result)) / (unsigned long)(
                                         (p_4 >> (p & 31)) * (v - 35702L) + 519L)) {
    v_7 = v_9 / -350LL;
    result = (signed char)p_4;
    v = (long)(((1056313088UL | v_7) + (unsigned long)(p_15 / (unsigned int)(
                                                       (int)result + 455))) + (
               4294915712UL - (unsigned long)(~ p_17[3])));
    result = (signed char)((int)v_11 * (int)p_13);
  }
  while_0_break_0: ;
  return result;
}


