#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 581073433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, short p_4, float p_6, int p_9, short p_11)
{
  char v_17;
  unsigned char v_15;
  signed char v_13;
  float v;
  unsigned short result;
  v_17 = (char)p_6;
  v_15 = (unsigned char)235;
  v_13 = (signed char)-80;
  result = (unsigned short)18937;
  v = (float)v_17;
  result = (unsigned short)((((int)((short)p_6) % ((int)p_11 + 696)) % (
                             (int)6732247040.f + 344) & ((int)result | (int)v_13)) - (int)(~ (~ v_15)));
  result = (unsigned short)(((unsigned int)p_6 + 4294952473U) - (unsigned int)(~ (
                            (int)((unsigned short)v) * (int)result << (
                            p_9 & 31))));
  result = (unsigned short)(! ((-1397 + (int)p) * ((int)p_4 << ((int)result & 15))) % (
                            (int)result + 104));
  return result;
}


