#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 400410465
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p)
{
  signed char v_5;
  unsigned char v;
  unsigned int result;
  v_5 = (signed char)78;
  v = (unsigned char)((int)v_5 | - (-54 + (int)((char)4234809610.65)));
  result = (unsigned int)(-44 << ((int)((signed char)(550.736022949f - (float)(
                                                      60917ULL - (unsigned long long)(
                                                      (int)p % ((int)v + 911))))) & 7));
  return result;
}


