#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 559027748
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned int p_7, float p_11, short p_17)
{
  unsigned char v_15;
  char v_13;
  unsigned long v_9;
  unsigned int v_5;
  char v;
  short result;
  v_15 = (unsigned char)p_11;
  v_13 = (char)-51;
  v_9 = (unsigned long)p_7;
  v_5 = (unsigned int)p_17;
  result = (short)(! ((unsigned int)v_13 % (v_5 + 429U) + (unsigned int)(~ v_15)) + p_7);
  v = (char)((unsigned long long)v_9 / ((18446744073672182189ULL % (unsigned long long)(
                                         (int)(! result) + 660)) % (unsigned long long)(
                                        (int)(- p_11) % 67 + 570) + 621ULL));
  result = (short)((unsigned int)((int)((char)(- p - 529560000.f)) * (int)v) + (
                   17U / (v_5 + 504U) + ~ p_7));
  return result;
}


