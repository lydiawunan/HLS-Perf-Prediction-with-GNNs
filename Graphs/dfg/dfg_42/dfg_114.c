#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 598950199
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, unsigned char p_7, float p_9, short p_11,
          int p_13)
{
  long long v_15;
  unsigned char v_5;
  double v;
  short result;
  v_15 = (long long)p;
  result = (short)-28061;
  v = (double)((long long)(- p_11) % (((v_15 + 21945LL) | (long long)p_11) + 424LL));
  v_5 = (unsigned char)result;
  result = (short)(- (((p_13 | p_13) / ((int)(- v_5) + 915)) % (p_13 / 65212 + 64)));
  result = (short)((unsigned int)((((int)((char)v) % -56) * ((int)result & 8703)) % (
                                  - ((int)p * (int)v_5) + 397)) % (((
                                                                    (unsigned int)(
                                                                    -5024 / (
                                                                    (int)p_7 + 41)) + 
                                                                    252032175U / (
                                                                    (unsigned int)p_9 + 297U)) + (unsigned int)p_11) + 258U));
  return result;
}


