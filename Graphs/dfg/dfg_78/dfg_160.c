#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 630672615
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned char p_5, unsigned long long p_11,
                  short p_13, short p_15)
{
  char v_9;
  unsigned short v_7;
  unsigned char v;
  unsigned long result;
  v = (unsigned char)p_15;
  v_7 = (unsigned short)(((int)(- (~ p_13)) ^ (int)v) / ((! ((int)p_15 - (int)p_13) << (
                                                          (int)(- p_13) & 31)) + 186));
  v_9 = (char)(-(unsigned char)165);
  v = (unsigned char)(18446744073709550895ULL - (unsigned long long)(
                                                ((int)p * -51757) % (
                                                (int)p_5 / ((int)v_7 + 972) + 467)) / (
                                                ((unsigned long long)v_9 & p_11) * (unsigned long long)(
                                                36 & (int)v_9) + 139ULL));
  result = (unsigned long)((18446744073709551615ULL - (unsigned long long)(- (
                            (int)v * -216989181))) / 239ULL);
  return result;
}


